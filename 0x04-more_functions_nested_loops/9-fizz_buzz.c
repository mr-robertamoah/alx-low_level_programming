#include <stdio.h>

/**
 * print_buzz - print
 *
 * Description: prints the input
 *
 * Return: void
 */
void print_buzz(void)
{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
}

/**
 * print_fizz - print
 *
 * Description: prints the input
 *
 * Return: void
 */
void print_fizz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
}

/**
 * print_i - print
 * @i: number to print
 *
 * Description: prints the input
 *
 * Return: void
 */
void print_i(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		print_fizz();
		print_buzz();
		return;
	}
	else if (i % 3 == 0)
	{
		print_fizz();
		return;
	}
	else if (i % 5 == 0)
	{
		print_buzz();
		return;
	}

	if (i > 9)
		putchar('0' + i / 10);

	putchar('0' + i % 10);
}

/**
 * main - Entry point
 *
 * Description: print numbers from 1 to 100 as well
 * as fizz, buzz and fizzbuzz based on condition
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		print_i(i);
		if (i != 100)
			putchar(' ');
		i++;
	}

	putchar('\n');

	return (0);
}
