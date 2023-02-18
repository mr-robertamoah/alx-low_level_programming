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
	int max_num = 9;
	int counter = 0;

	while (counter < max_num)
	{
		/**
		 * if (counter != 0 && (counter % 11 == 0))
		 *	continue;
		 */
		putchar('0' + counter);

		if (counter != max_num - 1)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}

		counter++;
	}
	return (0);
}
