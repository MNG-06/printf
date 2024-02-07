#include "main.h"
#include <stdarg.h>
/**
* _printf - a function that gives outputs
* Description: Prints out a string and returns it len
* @format: a string variable
* Return:length of a string
*/
int _printf(const char *format, ...)
{
	int i, sum_len;
	char s, next_num, pc;
	char *ps;
	va_list args;

	va_start(args, format);

	sum_len = 0;

	for (i = 0; i < _strlen(format); i = i + 1)
	{
		s = format[i];
		next_num = format[i + 1];
		if (s == '%' && next_num == '%')
		{
			_putchar('%');
			i = i + 1;
		}
		else if (s == '%' && next_num == 's')
		{
			ps = va_arg(args, char *);
			_string(ps, &sum_len);
			i = i + 1;
			continue;
		}
		else if (s == '%' && next_num == 'c')
		{
			pc = va_arg(args, int);
			/*pc means % c*/
			_putchar(pc);
			i = i + 1;
		}
		else
		{
			_putchar(s);
		}
		sum_len = sum_len + 1;
	}
	va_end(args);
	return (sum_len);
}
