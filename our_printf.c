#include "main.h"
/**
 * our_printf - func that produces output according to a format
 *
 * @format: format
 * Return: int
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list args;
	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);

		else if (format[i] == '%' && format[i + 1] != '%')
		{
			count += (*print(format[i + 1]))(args);
			i += 2;
		}
		else
			{
				_putchar('%');
				_putchar(format[i]);
				count++;

			}
	}
	va_end(args);
	return (count);
}
