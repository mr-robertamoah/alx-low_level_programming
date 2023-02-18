#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints a different combinations of three digits.
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int j, k, i;

	for (j = 0; j < 8; j++)
	{
		for (k = j + 1; k < 9; k++)
		{
			for (i = k + 1; i < 10; i++)
			{
				putchar('0' + j);
				putchar('0' + k);
				putchar('0' + i);

				if (j == 7 && k == 8 && i == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
