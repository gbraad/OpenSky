#ifndef __HAL_UART__H_
#define __HAL_UART__H_
#include "stm32f10x_gpio.h"
#include "config.h"

void hal_uart_init(void);
void hal_uart_start_transmission(uint8_t ch);
void hal_uart_int_enable(uint8_t enable) ;
uint8_t hal_uart_int_enabled(void);

static void hal_uart_init_nvic(uint8_t enable);
static void hal_uart_init_rcc(void);
static void hal_uart_init_gpio(void);
static void hal_uart_init_mode(void);
static void hal_uart_enable(void);
void DEBUG_USART_IRQHANDLER(void);

#endif // __HAL_UART__H_
