#include "main.h"

/**
 * factorial - multiplication
 * @n: integer for which to find factorial
 *
 * Description: finds the factorial of n
 *
 * Return: returns int
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
