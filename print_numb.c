#include "main.h"
/**
 * print_numb - prints numbers
 * @arg: the number
 * Return: n bytes
 */
int print_numb(va_list arg)
{
	unsigned int div = 1;
	unsigned int i = 0;
	int number = va_arg(arg, int);
	unsigned int n;

	if (number < 0)
	{
		_putchar('-');
		i++;
		n = -number;
	}
	else
	{
		n = number;
	}
	while (n / div > 9)
	{
		div *= 10;
	}
	while (div >= 1)
	{
		_putchar((n / div) + '0');
		i++;
		n %= div;
		div /= 10;
	}
	return (i);
}
