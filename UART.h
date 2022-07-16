#define F_CPU 16000000UL
#define BAUD 115200
#define UBRRx ((F_CPU/BAUD/8)-1)

#define REGULAR	0
#define BOLD	1	
#define UNDERL	4

enum color {
	BLACK = 0,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE
};

void UART_init( void );

void UART_putchar( char data );
char UART_getchar( void );
void UART_puts(char *str);

void itoa(uint32_t number, char* str, uint8_t base);

void UART_setText(uint8_t tipo, uint8_t color);
void UART_gotoxy(uint8_t x, uint8_t y);
void UART_clrscr( void );
