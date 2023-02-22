#include "main.h"

/**
 * times_table - prints times table
 *
 * Description: this prints the nine times table
 *
 * Return: void
 */

void times_table(void)
{
	int first_digit;
	int second_digit;
	int result;

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		_putchar('0');

		for (second_digit = 1; second_digit < 10; second_digit++)
		{
			_putchar(',');
			_putchar(' ');

			result = first_digit * second_digit;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar('0' + (result / 10));

			_putchar('0' + (result % 10));
		}

		_putchar('\n');
	}
}
