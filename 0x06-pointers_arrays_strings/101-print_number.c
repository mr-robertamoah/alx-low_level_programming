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
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}
