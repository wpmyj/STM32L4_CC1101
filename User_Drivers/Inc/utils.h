/*
 * utils.h
 *
 *  Created on: Mar 17, 2017
 *      Author: gs-ms
 */

#ifndef INC_UTILS_H_
#define INC_UTILS_H_

#include <stdarg.h>

#include <stdio.h>
#include <sys/stat.h>
#include <sys/unistd.h>

#include <stdlib.h>
#include <string.h>

#include "stm32l4xx_hal.h"
#include "usart.h"

extern int __errno;

#define 	S_TO_US(x) 		x * 1000 * 1000
#define 	MS_TO_US(x)		x * 1000
#define 	US_TO_US(x)		x

#define 	S_TO_MS(x) 		x * 1000
#define 	MS_TO_MS(x)		x

void 		check_for_printf_buffer(void);

void 		print_char(char character);
void 		print_uart_ln(char * fmt, ...);
void 		print_uart(char * fmt, ...);
void 		delay_us(uint32_t timeout);

int 		uart_send(void * p, uint16_t size);
void 		_safe_send(void * p, uint16_t size);

void 		wdt_reset(void);

#endif /* INC_UTILS_H_ */
