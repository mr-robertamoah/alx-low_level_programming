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
	int div = n / 10;
	int mod = n % 10;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (div > 9)
	{
		print_number(div);
		print_number(mod);
		return;
	}

	if (n > 9)
		_putchar('0' + n / 10);

	_putchar('0' + n % 10);
}
