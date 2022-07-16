#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "Timer.h"

#define timerOffset(t) (t==R ? 0x80 : (t==L ? 0x90 : 0xA0))
#define TCCRxA 	_SFR_MEM8(timerX)
#define TCNTx	_SFR_MEM16(timerX+4)
#define OCRxA	_SFR_MEM16(timerX+8)
#define OCRxB	_SFR_MEM16(timerX+10)

#define TICKS(freq) (freq == 0 ? 0 : (2000000/freq)) 

static uint8_t playing[3] = {0, 0, 0};

static volatile uint64_t mSecCnt[3];
static note *songToPlay [3];
static uint16_t lenOfSong[3];
static uint16_t nNid[3] = {0, 0, 0};

static uint8_t *timerX;

void Timer0_Ini ( void ){
	//CTC, OC0A toggle on compare
	TCCR0A = (1<<COM0A0) | (2<<WGM00);
	TCCR0B = (3<<CS00); // clk/64

	//Todo apagado
	TIMSK0 = 0x00;

	//Cada 250 tiempos sucede un millisegundo
	OCR0A = 250 - 1;

    sei(); /* habilita interrupciones (global) */
}

void Channels_Ini(){
	/* TIMER 1 */ {
		//Fast PWM ancho de pulso 50% por defecto
		TCCR1A = (3<<WGM10);
		TCCR1B = (3<<WGM12);

		//Presscalador 8
		TCCR1B |= (2<<CS10);

		// Nota base C4
		OCR1A = TICKS(Cn4); 
		OCR1B = OCR1A / 2;

		// Activando el salida del PWM
		DDRB |= (1<<PB6);
	}

	/* TIMER 3 */ {
		//Fast PWM ancho de pulso 50% por defecto
		TCCR3A = (3<<WGM30);
		TCCR3B = (3<<WGM32);

		//Presscalador 8
		TCCR3B |= (2<<CS30);

		// Nota base C4
		OCR3A = TICKS(Cn4); 
		OCR3B = OCR3A / 2;

		// Activando el salida del PWM
		DDRE |= (1<<PE4);
	}
	
	/* TIMER 4 */ {
		//Fast PWM ancho de pulso 50% por defecto
		TCCR4A = (3<<WGM40);
		TCCR4B = (3<<WGM42);

		//Presscalador 8
		TCCR4B |= (2<<CS40);

		// Nota base C4
		OCR4A = TICKS(Cn4);
		OCR4B = OCR4A / 2;

		// Activando el salida del PWM
		DDRH |= (1<<PH4);
	}
}

void Channel_Freq_Gen(uint8_t channel, uint16_t freq){
	timerX = timerOffset(channel);

	if(freq){
		OCRxA = TICKS(freq); 
		OCRxB = OCRxA / 2;
		TCNTx = 0x0000;

		TCCRxA |= (2<<COM1B0);
	} else {
		//Desactivando salida
		TCCRxA &= ~(3<<COM1B0);
	}
}

void Channel_Play(uint8_t channel, const note * song, uint16_t len)
{
	songToPlay[channel] = ( note *) song;
	lenOfSong[channel] = len;
	nNid[channel] = 1;
	mSecCnt[channel] = 1;
	playing[channel] = 1;
}

void Song_Play(const note * song[]){
	Channel_Play(R, song[R], song[R][0].freq);
	Channel_Play(L, song[L], song[L][0].freq);
	Channel_Play(C, song[C], song[C][0].freq);

	TIMSK0 = (1<<OCIE0A);
}

void Song_Stop(){
	playing[R] = 0x00;
	playing[L] = 0x00;
	playing[C] = 0x00;
	Channel_Freq_Gen(R, S__);
	Channel_Freq_Gen(L, S__);
	Channel_Freq_Gen(C, S__);

	TIMSK0 = 0x00;
}

ISR(TIMER0_COMPA_vect){ 
	static note noteNow[3];

	/* 	LADO DERECHO   */
	if (playing[R]) {
		if( nNid[R] < lenOfSong[R]){
			if(mSecCnt[R] == 1){
				//noteNow[R].delay = pgm_read_word(&songToPlay[R][nNid[R]].delay);
				//noteNow[R].freq = pgm_read_word(&songToPlay[R][nNid[R]].freq);
				noteNow[R].delay = songToPlay[R][nNid[R]].delay;
				noteNow[R].freq = songToPlay[R][nNid[R]].freq;

				Channel_Freq_Gen(R, noteNow[R].freq);

			} else if (mSecCnt[R] == noteNow[R].delay - SILENCE){
				Channel_Freq_Gen(R, S__);
			} else if (mSecCnt[R] == (noteNow[R].delay)){
				mSecCnt[R] = 0;
				nNid[R]++;
			}

			mSecCnt[R]++;

		} else if (nNid[R] == lenOfSong[R]){
			playing[R] = 0;
			Channel_Freq_Gen(R, S__);
		}
	}

	/* LADO IZQUIERDO */
	if(playing[L]) {
		if(nNid[L] < lenOfSong[L]){
			if(mSecCnt[L] == 1){
				//noteNow[L].delay = pgm_read_word(&songToPlay[L][nNid[L]].delay);
				//noteNow[L].freq = pgm_read_word(&songToPlay[L][nNid[L]].freq);
				noteNow[L].delay = songToPlay[L][nNid[L]].delay;
				noteNow[L].freq = songToPlay[L][nNid[L]].freq;

				Channel_Freq_Gen(L, noteNow[L].freq);

			} else if (mSecCnt[L] == noteNow[L].delay - SILENCE){
				Channel_Freq_Gen(L, S__);
			} else if (mSecCnt[L] == (noteNow[L].delay)){
				mSecCnt[L] = 0;
				nNid[L]++;
			}	

			mSecCnt[L]++;
		
		} else if (nNid[L] == lenOfSong[L]){
			playing[L] = 0;
			Channel_Freq_Gen(L, S__);
		}
	}

	/* LADO CENTRO */
	if(playing[C]) {
		if(nNid[C] < lenOfSong[C]){
			if(mSecCnt[C] == 1){
				//noteNow[C].delay = pgm_read_word(&songToPlay[C][nNid[C]].delay);
				//noteNow[C].freq = pgm_read_word(&songToPlay[C][nNid[C]].freq);
				noteNow[C].delay = songToPlay[C][nNid[C]].delay;
				noteNow[C].freq = songToPlay[C][nNid[C]].freq;

				Channel_Freq_Gen(C, noteNow[C].freq);

			} else if (mSecCnt[C] == noteNow[C].delay - SILENCE){
				Channel_Freq_Gen(C, S__);
			} else if (mSecCnt[C] == (noteNow[C].delay)){
				mSecCnt[C] = 0;
				nNid[C]++;
			}	

			mSecCnt[C]++;
		
		} else if (nNid[C] == lenOfSong[C]){
			playing[C] = 0;
			Channel_Freq_Gen(C, S__);
		}
	}

	if ( !(playing[R] | playing[L] | playing[C]) ){
		TIMSK0 = 0x00;
	}
}
