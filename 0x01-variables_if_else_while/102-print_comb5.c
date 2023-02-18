#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints a different combinations of two two digits.
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int i, j;
	int stop = 1;

	for (i = 0; i < 100 && stop; i++)
	{
		for (j = 1; j < 100 && stop; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
			{
				stop = 0;
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
