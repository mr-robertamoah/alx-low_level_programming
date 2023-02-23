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
	if (n > 9)
		_putchar('0' + n / 10);

	_putchar('0' + n % 10);
}

/**
 * more_numbers - print more
 *
 * Description: prints the numbers from
 * 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			print_number(c);
		}

		_putchar('\n');
	}
}
