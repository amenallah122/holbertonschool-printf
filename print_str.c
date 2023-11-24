#include "main.h"
/**
 * print_str -  Prints a string
 * @arg: the string
 * Return: n bytes
 */
int print_str(va_list arg)
{
	char *str;
	int n;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (n = 0; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
}
