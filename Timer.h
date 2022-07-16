#include "Notes.h"

#define SILENCE 10

#define R 0
#define L 1
#define C 2

typedef struct {
	uint16_t freq;
	uint16_t delay;
} note;

void Timer0_Ini ( void );

void Channels_Ini ( void );
void Channel_Freq_Gen(uint8_t channel, uint16_t freq);
void Channel_Play(uint8_t channel, const note song[], uint16_t len);

void Song_Play(const note * song[]);
void Song_Stop();
