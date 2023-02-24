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
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + n % 10);
}
