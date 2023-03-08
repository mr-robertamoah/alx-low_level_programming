#include "main.h"

/**
 * is_sqr - multiplication
 * @a: integer
 * @b: integer
 *
 * Description: determines if square of b is a
 *
 * Return: returns int
 */

int is_sqr(int a, int b)
{
	if (b > 46340 * 2)
		return (is_sqr(a, b / 2));
	else if (b > 46340)
		return (is_sqr(a, b - 1));

	if (b * b == a)
		return (b);
	else if (b == 0 && a != b)
		return (-1);

	return (is_sqr(a, b - 1));
}

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
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);

	return (is_sqr(n, n - 1));
}
