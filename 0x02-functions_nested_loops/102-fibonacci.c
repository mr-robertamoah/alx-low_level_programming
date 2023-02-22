#include <stdio.h>

/**
 * print_delim - print characters
 *
 * Description: print comma and space
 *
 * Return: void
 */
void print_delim(void)
{
	putchar(',');
	putchar(' ');
}

/**
 * main - Entry point
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int fibo_count = 2;
	long long int sum = 1;
	long long int p1 = 1;
	long long int p2 = 2;

	printf("%llu", p1);
	print_delim();
	printf("%llu", p2);

	while (fibo_count < 50)
	{
		print_delim();

		sum = p1 + p2;
		p1 = p2;
		p2 = sum;

		fibo_count++;

		printf("%lld", sum);
	}

	putchar('\n');
	return (0);
}
