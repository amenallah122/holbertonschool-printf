# holbertonschool-printf
a function that produces output according to a format.

Please note that this version of _printf focuses on fundemantal formatting options which are '%c', '%s', '%i and '%d', and does not include advanced features such as flag characters , field width, precision , or length modifiers .


| Format specifier            | Output                                                               |
| ----------------- | ----------------- |
| %c | Character |
| %s | String |
| %d | Decimal |
| %i | integer |

This version is still under work so it can't fully replace the standard printf function.

To build this function , we organized the code into multiple files , each one is dedicated to a specific operation, as outlined below :

| File Name             | Description                                               |
|-----------------------|-----------------------------------------------------------|
| our_printf.c        | Main implementation of the _printf function. Processes the format string and generates output based on supported conversion specifiers such as %c, %s, %i, and %d. Provides basic formatting options. Does not include advanced features like flag characters or precision.  |
| main.h              | Header file containing function prototypes. |
| specifier.c         | Implementation of a function that selects the appropriate handler for each conversion specifier. |
| print_char.c        | Implementation of the function to print a character (%c). |
| print_str.c         | Implementation of the function to print a string (%s). |
| print_numb.c        | Implementation of the function to print integers (%i and %d). |
| _putchar.c          | Implementation of the _putchar function responsible for writing a character to the standard output. |
| README.md           | Documentation file providing an overview of the project


# Prototype 
int _printf(const char *format, ...);

# Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

# Flowchart
