#include "main.h"

/**
 * print_number - print
 * @n: number to print
 *
 * Description: prints the input
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = n * -1;
	}
	else
	{
		x = n;
	}

	if (x / 10)
		print_number(x / 10);

	_putchar('0' + (x % 10));
}
