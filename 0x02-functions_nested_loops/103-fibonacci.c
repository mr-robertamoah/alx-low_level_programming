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
	unsigned long int sum;
	unsigned long int fnum = 1;
	unsigned long int p1 = 1;
	unsigned long int p2 = 2;

	sum = p2;

	while (fibo_count < 50)
	{
		fnum = p1 + p2;
		p1 = p2;
		p2 = fnum;

		fibo_count++;

		if (fnum % 2 != 0 && fnum < 4000000)
			sum = sum + fnum;
	}

	printf("%lu", sum);
	putchar('\n');
	return (0);
}
