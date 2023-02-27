#include "main.h"

/**
 * _strlen - length of string
 * @s: the pointer of the string
 *
 * Description: gets the length of a string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * print_rev - print in reverse
 * @s: the pointer of the string
 *
 * Description: print string in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len; i > 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
