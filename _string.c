#include "main.h"
/**
*_string - a function for printing out characters
*Description: It prints out the characters of a string
*@str: a string variable
*@sum_len: a pointer variable for storing the number
* of characters printed out
*/
void _string(char *str, int *sum_len)
{
	int i;
	char s;

	for (i = 0; str[i] != '\0'; i++)
	{
		s = str[i];
		_putchar(s);
		*sum_len = *sum_len + 1;
	}
}
