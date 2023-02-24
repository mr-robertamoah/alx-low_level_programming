#include "main.h"

/**
 * print_line - print line
 * @n: the number of times the character
 * _ should be printed
 *
 * Description: printing a line with _
 *
 * Return: void
 */

void print_line(int n)
{
	int c = 1;

	while (c <= n)
	{
		_putchar('_');
		c++;
	}

	_putchar('\n');
}
