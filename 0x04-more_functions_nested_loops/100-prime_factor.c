#include <stdio.h>

#define number 612852475143

int is_prime(long int);

/**
 * get_next_prime - gets prime
 * @n: is the long int used to get the next prime
 *
 * Description: gets the next prime number after @n
 *
 * Return: returns long int
 */

long int get_next_prime(long int n)
{
	n++;

	while (n <= number)
	{
		if (is_prime(n))
			return (n);

		n++;
	}

	return (--n);
}

/**
 * is_prime - checks prime
 * @n: is the long int to be checked
 *
 * Description: checks whether or not @n is a prime
 * number
 *
 * Return: returns 0 if not a prime and 1 otherwise
 */

int is_prime(long int n)
{
	long int i = 1;

	for (i = 2; i < n; n++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}

/**
 * main - Entry point
 *
 * Description: prints the highest prime of number
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	unsigned long int current, prime, highest;

	for (current = 1; current <= number; current++)
	{
		prime = get_next_prime(current);

		if (number % prime == 0)
			highest = prime;
	}

	printf("%lu\n", highest);

	return (0);
}
