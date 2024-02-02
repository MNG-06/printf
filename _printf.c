#include "main.h"

int _printf(char *format, ...)
{
    int i;
    /*
    args_count = _strlen(format);

    va_list  args;

    va_start(args, format);
    */
    for (i = 0; i < _strlen(format); i++)
    {
        char s = format[i];
        _putchar(s);
    }
    _putchar('\n');
    return (0);
}