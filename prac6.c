#include <avr/io.h>
#include "UART.h"

int main( void )
{
    UART_Ini(0,9600,8,0,1);
    UART_getchar(0);
    UART_clrscr(0);

    while(1) 
    {

    }
}