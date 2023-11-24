#include "main.h"
/**
 * print_char -  Prints a character
 * @arg: the character
 * Return: 1 byte
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
