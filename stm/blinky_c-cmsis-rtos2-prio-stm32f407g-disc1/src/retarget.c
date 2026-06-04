#include "stm32f4xx.h"

// https://developer.arm.com/documentation/ka002219/1-0/

int stdout_putchar(int ch) {
    // while (!(USART1->SR & USART_SR_TXE));
    // USART1->DR = ch;
		ITM_SendChar(ch);
    return ch;
}