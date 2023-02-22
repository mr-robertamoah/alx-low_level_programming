#include "main.h"

/**
 * print_n - print number
 * @n: the int to print from
 *
 * Description: print one or two digits numbers
 *
 * Return: void
 */
void print_n(int n)
{
	if (n > 9)
		_putchar('0' + n);
	_putchar('0' + n);
}
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
	int div = n / 10;
	int mod = n % 10;

	if (div >= 1)
	{
		print_number(div);
		print_number(mod);
		return;
	}

	print_n(n);
}

/**
 * print_times_table - prints times table
 * @n: the number of times printed
 *
 * Description: this prints the n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int first_digit;
	int second_digit;
	int result;

	if (n == 100)
		return;

	for (first_digit = 0; first_digit <= n; first_digit++)
	{
		_putchar('0');

		for (second_digit = 1; second_digit <= n; second_digit++)
		{
			_putchar(',');
			_putchar(' ');

			result = first_digit * second_digit;

			if (result <= 9)
				_putchar(' ');

			if (result <= 99)
				_putchar(' ');

			print_number(result);
		}

		_putchar('\n');
	}
}
