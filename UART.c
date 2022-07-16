#include <avr/io.h>
#include "UART.h"

//Inicialziador de UART 0
void UART_init( void ){
	//Activando doble velocidad
	UCSR0A |= (1<<U2X0);

	//Activando transmision y recepcion
	UCSR0B = (1<<TXEN0) | (1<<RXEN0);

	//Tamano de 8 bits, sin paridad y un bit de paro
	UCSR0C = (3<<UCSZ00);
	UCSR0B &= ~(1<<UCSZ02);

	UBRR0 = UBRRx;
}

void UART_putchar (char data){
	while(!(UCSR0A & (1<<UDRE0)));
		UDR0 = data;
}

char UART_getchar (){
	while(!(UCSR0A & (1<<RXC0)));
		return UDR0;
}

void UART_puts(char *str){
	while(*str) UART_putchar(*(str++));
}

void itoa(uint32_t number, char* str, uint8_t base){
uint8_t i;
    uint8_t tam;
    uint16_t aux;

    /*Para no imprimir 0s demas*/
    if (base < 2){
        return;
    } else if (base == 2) { 
        tam = 15;
    } else if (base == 3){
        tam = 10;
    } else if (base == 4 ){
        tam = 7;
    } else if (base < 7){
        tam = 6;
    } else if (base < 10){
        tam = 5;
    } else if (base < 15){
        tam = 4;
    } else { tam = 3; }

    /*Caracter nulo al final de la cadena*/
    *(str + tam + 1) = '\0';

    /*Proceso de conversion*/
    for (i = 0 ; i <= tam ; i++)
    {
        aux = number%base;
        if(aux<10){
            *(str +(tam - i)) = aux + '0';
        } else {
            *(str +(tam - i)) = aux + '7';
        }

        number = (number - aux)/base;
    }
}

void UART_setText(uint8_t tipo, uint8_t color)
{
	static char str[] = "\e[0;30m";
	str[5] = color + '0'; 
    str[2] = tipo + '0'; 

    UART_puts(str);
}

void UART_gotoxy(uint8_t x, uint8_t y)
{
	static char str[] = "\x1b[00;00H";
	  
    str[3] = '0' + y % 10;
    y/=10;
    str[2] = '0' + y %10; 

    str[6] = '0' + x % 10;
    x/=10;
    str[5] = '0' + x %10; 

  UART_puts(str);
}

void UART_clrscr(){
	UART_puts("\x1b[2J");
    UART_puts("\x1b[H");
}
