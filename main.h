#ifndef __PRINTF__
#define __PRINTF__
#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct amen
{
	char character;
	int (*fun)(va_list);
}ahla_nes;

int (*print(char specifier))(va_list args);
int print_char(va_list arg);
int print_str(va_list arg);
int print_numb(va_list arg);
int print_numb_recursive(int number);
int _putchar(char c);
int _printf(const char *format, ...);


#endif /*__PRINTF__*/
