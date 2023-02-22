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
	unsigned long int sum = 1;
	unsigned long int p1 = 1;
	unsigned long int p2 = 2;

	printf("%lu", p1);
	print_delim();
	printf("%lu", p2);

	while (fibo_count < 98)
	{
		print_delim();

		sum = p1 + p2;
		p1 = p2;
		p2 = sum;

		fibo_count++;

		printf("%lu", sum);
	}

	putchar('\n');
	return (0);
}
