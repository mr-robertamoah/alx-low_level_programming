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
 * puts_half - prints string
 * @str: the pointer of the string
 *
 * Description: prints second half of a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = _strlen(str) + 1;
	int n = len / 2;

	if (len % 2 != 0)
		n = (len - 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);

		n++;
	}

	_putchar('\n');
}
