#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints a different combinations of two digits.
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int j, k;

	for (j = 0; j < 9; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			putchar('0' + j);
			putchar('0' + k);

			if (j == 8 && k == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
