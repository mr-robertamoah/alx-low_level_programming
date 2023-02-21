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
	else
		_putchar('0');
	_putchar('0' + n % 10);
}

/**
 * jack_bauer - jack_bauer function
 *
 * Description: this prints every minute in a day
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			print_two_digits(hours);
			_putchar(':');

			print_two_digits(minutes);
			_putchar('\n');
		}
	}
}
