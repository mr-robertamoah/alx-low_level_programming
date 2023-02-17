#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int counter;

	for (counter = 0; counter < 17; counter++)
	{
		if (counter < 10)
			putchar('0' + counter);
		else
			putchar(counter == 16 ? '\n' : 'a' + (counter - 10));
	}

	return (0);
}
