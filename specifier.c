#include "main.h"
/**
 * print_format -  selects the right function
 * @specifier: the character
 * Return: 0
 */
int (*print( char specifier))(va_list)
{
	ahla_nes fel_kayes[] = {
		{'c', print_char},
		{'s', print_str},
		/*{'d', print_numb},
		//{'i', print_numb},*/
		{'\0', NULL}
	};
	int j;

	for ( j = 0; fel_kayes[j].character != '\0'; j++)
	{
		if (fel_kayes[j].character == specifier)
		{
			return (fel_kayes[j].fun);
		}
	}
	
	return (0);
}
