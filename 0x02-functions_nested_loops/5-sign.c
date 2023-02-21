#include "main.h"

/**
 * print_sign - main code
 * @n: this is the number which has its sign printed
 *
 * Description: this checks whether or no an alphabet is
 * in lowercase or not
 *
 * Return: 0 when alphabet is lower and 1 if not
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}

	return (result);
}
