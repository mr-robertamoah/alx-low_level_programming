#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: the number of times the character
 * \ should be printed
 *
 * Description: printing a line with \
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int c = 1;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (c <= n)
	{
		for (space = 1; space < c; space++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		c++;
	}
}
