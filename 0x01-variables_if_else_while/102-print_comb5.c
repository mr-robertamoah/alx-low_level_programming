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
	int stop = 1;

	for (i = 0; i < 10 && stop; i++)
	{
		for (j = 0; j < 10 && stop; j++)
		{
			for (k = 0; k < 10 && stop; k++)
			{
				for (l = k == 0 ? j + 1 : 0; l < 10 && stop; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);

					if (i == 9 && j == 8 && k == 9 && l == 9)
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
		}
	}

	putchar('\n');
	return (0);
}
