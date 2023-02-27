#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * @str: the pointer of the string
 *
 * Description: prints the string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
	printf("%s", str);
	printf("%x", *str);

	while (str[i] != '\0')
	{
/*		_putchar((int) str[i]); */

		i++;
	}
/*	_putchar('\n'); */
}
