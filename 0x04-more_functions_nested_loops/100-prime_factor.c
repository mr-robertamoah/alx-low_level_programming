#include <stdio.h>
#include <math.h>

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
	long int number = 1;
	n++;
	puts("in get next prime");
	while (n <= number)
	{
	puts("in get next prime loop");
		if (is_prime(n))
			return (n);

		n++;
	}
	puts("out of get next prime");

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
	puts("in is prime");

	for (i = 2; i < n; n++)
	{
	puts("in is prime loop");
		if (n % i == 0)
			return (0);
	}

	puts("out of is prime");
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
	unsigned long int current = 2, number, highest, i;
	int it_is_prime;

	number = 612852475143;

	while (current <= number)
	{
		if (number % current != 0)
		{
			current++;
			continue;
		}

		it_is_prime = 1;

		for (i = 2; i <= current / 2; i++)
		{
			if (current % i == 0)
			{
				it_is_prime = 0;
				break;
			}
		}

		if (it_is_prime)
			highest = current;

		current++;
	}
	printf("%lu\n", highest);
	return (0);
}
