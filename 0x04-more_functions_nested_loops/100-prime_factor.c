#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: prints the highest prime of number
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	long int current = 2, number, highest;

	number = 612852475143;
	highest = 2;

	while (number % 2 == 0)
		number = number / 2;

	for (current = 3; current <= sqrt(number); current = current + 2)
	{
		while (number % current == 0)
		{
			highest = current;
			number = number / current;
		}
	}

	if (number > 2)
		highest = number;

	printf("%ld\n", highest);
	return (0);
}
