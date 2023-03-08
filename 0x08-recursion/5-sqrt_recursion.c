#include "main.h"

/**
 * _sqrt_recursion - division
 * @n: integer
 *
 * Description: finds the natural sqrt of a number
 *
 * Return: returns int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * _sqrt_recursion(n - 1));
}
