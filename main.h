#ifndef __PRINTF__
#define __PRINTF__
#include "main.h"
#include <stdio.h>
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


#endif /*__PRINTF__*/
