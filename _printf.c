#include "main.h"
/**
* _printf - a function that gives outputs
* Description: Prints out a string and returns it len
* @format: a string variable
* Return:length of a string
*/
int _printf(const char *format, ...)
{
	int i;
	int sum_len;
	char s;
	char next_num;

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
		else
		{
			_putchar(s);
		}
		sum_len = sum_len + 1;
	}
	_putchar('\n');
	return (sum_len);
}
