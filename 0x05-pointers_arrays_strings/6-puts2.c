#include "main.h"

/**
 * puts2 - prints string
 * @str: the pointer of the string
 *
 * Description: prints everyother character in
 * a string starting with the first character
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i += 2;
	}

	_putchar('\n');
}
