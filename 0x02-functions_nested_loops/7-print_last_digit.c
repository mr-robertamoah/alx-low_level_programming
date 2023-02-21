#include "main.h"

/**
 * print_last_digit - main code
 * @n: this is the number which has its last
 * digit printed
 *
 * Description: this returns and prints the
 * last digit of the input @n
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
		result = result * -1;

	_putchar('0' + result);
	return (result);
}
