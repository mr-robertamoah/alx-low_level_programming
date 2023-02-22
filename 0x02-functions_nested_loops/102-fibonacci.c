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
	int count = 0;
	int fibo_count = 2;
	unsigned long int sum = 1;
	int p1 = 1;
	int p2 = 2;

	printf("%i", p1);
	print_delim();
	printf("%i", p2);

	while (fibo_count <= 50)
	{
		if (fibo_count != 50)
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
