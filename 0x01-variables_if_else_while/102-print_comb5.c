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
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 1; l < 10; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);

					if (i == 9 && j == 8 && k == 9 && l == 9)
						continue;

					putchar(',');
				}	putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
