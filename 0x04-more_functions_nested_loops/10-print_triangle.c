#include "main.h"

/**
 * print_triangle - print triangle
 * @n: the number of times the character
 * \ should be printed
 *
 * Description: printing a line with \
 *
 * Return: void
 */

void print_triangle(int n)
{
	int c = 1;
	int space, hash;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (c <= n)
	{
		for (space = 1; space <= n - c; space++)
			_putchar(' ');

		for (hash = 1; hash <= c; hash++)
			_putchar('#');

		_putchar('\n');

		c++;
	}
}
