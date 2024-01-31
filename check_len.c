#include "main.h"
/**
 * _strlen - a function name
 * Description: a function that checks the length of a string
 * @s: a pointer to a string
 * Return: an integer
 */
int _strlen(char *s)
{
	int chck_len;

	chck_len = 0;
	while (s[chck_len])
		chck_len++;
	return (chck_len);
}
