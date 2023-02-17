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
	int counter = 0;

	while (counter < 10)
	{
		putchar('0' + counter);
		counter++;

		if (counter == 10)
			putchar('\n');
	}
	return (0);
}
