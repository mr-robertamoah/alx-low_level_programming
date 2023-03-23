#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - summation
 * @n: number of integers
 *
 * Description: sum the number of integers
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(vl, n);

	for (i = 1; i <= n; i++)
	{
		sum += va_arg(vl, int);
	}

	va_end(vl);
	return (sum);
}
