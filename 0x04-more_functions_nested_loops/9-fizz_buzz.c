#include "main.h"

/**
 * print_buzz - print
 *
 * Description: prints the input
 *
 * Return: void
 */
void print_buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
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
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}

/**
 * print_number - print
 * @n: number to print
 *
 * Description: prints the input
 *
 * Return: void
 */
void print_number(int n)
{
	int div = n / 10;
	int mod = n % 10;

	if (div >= 10)
	{
		print_number(div);
		print_number(mod);
		return;
	}

	if (n > 9)
		_putchar('0' + n / 10);

	_putchar('0' + n % 10);
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

	print_number(i);
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
		i++;
		if (i != 100)
			_putchar(' ');
	}

	_putchar('\n');

	return (0);
}
