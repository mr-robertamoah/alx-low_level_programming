#include "main.h"

/**
 * print_number - print
 * @n: integer to print
 *
 * Description: print an integer using _putchar
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = n * -1;
	}

	if (x / 10)
		print_number(x / 10);

	_putchar('0' + (x % 10));
}
