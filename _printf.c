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

	for (i = 0; i < _strlen(format); i++)
	{
		char s = format[i];

		_putchar(s);
	}
	_putchar('\n');
	return (0);
}
