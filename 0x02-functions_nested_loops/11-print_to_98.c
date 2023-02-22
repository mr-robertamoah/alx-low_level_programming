#include "main.h"

/**
 * print_number - print number
 * @n: the int to print from
 *
 * Description: print one or two digits numbers
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

	if (n > 99)
	{
		_putchar('0' + n / 100);
		n = n % 100;
	}

	if (n > 9)
		_putchar('0' + n / 10);

	_putchar('0' + n % 10);

	if (n == 98)
	{
		_putchar('\n');
		return;
	}

	_putchar(',');
	_putchar(' ');
}

/**
 * print_desc - print numbers
 * @n: the int to print from
 *
 * Description: print numbers in descending order
 * from number to 98
 *
 * Return: void
 */
void print_desc(int n)
{
	while (n >= 98)
	{
		print_number(n);
		n--;
	}
}
/**
 * print_asc - print numbers
 * @n: the int to print from
 *
 * Description: print numbers in ascending order
 * from number to 98
 *
 * Return: void
 */
void print_asc(int n)
{
	while (n <= 98)
	{
		print_number(n);
		n++;
	}
}

/**
 * print_to_98 - print numbeers
 * @n: the int to print from
 *
 * Description: print from a number to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
		print_desc(n);
	else
		print_asc(n);
}
