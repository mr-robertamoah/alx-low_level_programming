#include "main.h"

/**
 * is_divisible - divide
 * @a: integer
 * @b: integer
 *
 * Description: determine if number is divisible
 *
 * Return: returns int
 */
int is_divisible(int a,  int b)
{
	if (b == 1)
		return (1);
	else if (a % b == 0)
		return (0);

	return (is_divisible(a, b - 1));
}

/**
 * is_prime_number - prime
 * @n: integer
 *
 * Description: determine if number is prime
 *
 * Return: returns int
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);

	return (is_divisible(n, n - 1));
}
