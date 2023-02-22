#include <stdio.h>

/**
 * n_is_multiple_m - modulus function
 * @n: the input which is being determined to be a multiple
 * @m: the input which serves as multiple
 *
 * Description: determines if n is a multiple of m
 *
 * Return: returns 0 (Success)
 */
int n_is_multiple_m(int n, int m)
{
	if (m < n && (n % m) == 0)
		return (1);

	return (0);
}

/**
 * main - Entry point
 *
 * Description: prints all multiples of 3 or 5
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int sum = 0;
	int count = 0;

	while (count < 1024)
	{
		if (n_is_multiple_m(count, 3) || n_is_multiple_m(count, 5))
			sum = sum + count;
	}

	printf("%i\n", sum);
	return (0);
}
