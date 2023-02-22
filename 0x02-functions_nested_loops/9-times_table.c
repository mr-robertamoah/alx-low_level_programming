#include "main.h" 

void print_two_digits(int n);

/**
 * print_two_digits - prints digits
 * @n: this is the digit printed
 *
 * Description: this prints the digits in two characters
 */
void print_two_digits(int n)
{
	if (n > 9)
		_putchar(n / 10 + '0');
	_putchar('0' + n % 10);
}

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

	first_digit = 0;

	while (first_digit < 10)
	{
		second_digit = 0;

		while (second_digit < 10)
		{
			result = first_digit * second_digit;

			print_two_digits(result);

			if (second_digit == 9)
			{
				_putchar('\n');
				break;
			}

			_putchar(',');

			if ((first_digit * second_digit) > 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}

			second_digit++;
		}

		first_digit++;
	}

	return;
}
