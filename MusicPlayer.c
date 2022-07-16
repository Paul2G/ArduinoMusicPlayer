#include <inttypes.h>
#include "UART.h"
#include "Timer.h"
#include "Songs.h"

int main(void)
{
	uint8_t songNum = 1;
	const char * name[] = {
		"0. Test                 ",
		"1. Kesson Dalek         ",
		"2. PKMN GSC - Surf Theme"
	};

	UART_init();
	Timer0_Ini();
	Channels_Ini();

	UART_clrscr();
	UART_setText(BOLD, WHITE);
	UART_puts("Reproductor de musica");
	UART_puts("\n\n\r");

	UART_setText(REGULAR, YELLOW);
	UART_puts(name[songNum]);
	UART_puts("\n\r");

	UART_setText(REGULAR, RED);
	UART_puts("Detenido");
	UART_puts("\n\n\r");

	UART_setText(REGULAR, WHITE);
	UART_puts("P para reproducir\n\r");
	UART_puts("S para detener\n\r");
	UART_puts("N para siguiente\n\r");
	UART_puts("B para anterior");
	UART_gotoxy(0, 10);

	while(1)
	{
		switch (UART_getchar())
		{
			case 'p':
			case 'P':
				Song_Play(songsTable[songNum]);
				UART_gotoxy(0, 4);
				UART_setText(REGULAR, GREEN);
				UART_puts("Reproduciendo...");
				break;
			case 's':
			case 'S':
				Song_Stop();
				UART_gotoxy(0, 4);
				UART_setText(REGULAR, RED);
				UART_puts("Detenido         ");
				break;
			case 'n':
			case 'N':
				if(songNum != 2){
					songNum++;
					Song_Play(songsTable[songNum]);
					UART_gotoxy(0, 3);
					UART_setText(REGULAR, YELLOW);
					UART_puts(name[songNum]);
					UART_gotoxy(0, 4);
					UART_setText(REGULAR, GREEN);
					UART_puts("Reproduciendo...");
				}
				break;
			case 'b':
			case 'B':
				if(songNum != 0){
					songNum--;
					Song_Play(songsTable[songNum]);
					UART_gotoxy(0, 3);
					UART_setText(REGULAR, YELLOW);
					UART_puts(name[songNum]);
					UART_gotoxy(0, 4);
					UART_setText(REGULAR, GREEN);
					UART_puts("Reproduciendo...");
				}
				break;
			default:
				break;
		}
		UART_gotoxy(0, 10);
	}
	return 0;
}
