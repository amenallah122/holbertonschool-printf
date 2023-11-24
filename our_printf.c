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

    if (format[i]==NULL)
    return(-1);

    for (i=0;format[i] != '\0'; i++)
    {
        if (format[i] !='%')
        {
            _putchar(format[i]);
            count++;
        }
        else if (format[i]=='%' && format[i+1]=='%')
        {
            _putchar('%');
            count++;
        }
        else if (format[i]=='%' && format[i+1]=='\0')
        return(-1);
    
    else if (format[i]=='%'&& format[i+1] !='%')
        count += (*print(format[i+1])(args));
    }
    va_end(args);
return(count);
}
