#include "main.h"

/**
 * print_numb_recursive - helper
 * @arg: the number
 * Return: n bytes
 */
int print_numb_recursive(va_list arg)
{
    int number = va_arg(arg, int);
    int i = 0;

    if (number < 0)
    {
        _putchar('-');
        i++;
        number = -number;
    }

    if (number / 10)
        i += print_numb_recursive(arg);

    _putchar(number % 10 + '0');
    return (i + 1);
}

/**
 * print_numb - Prints a number
 * @arg: the number
 * Return: n bytes
 */
int print_numb(va_list arg)
{
    return print_numb_recursive(arg);
}