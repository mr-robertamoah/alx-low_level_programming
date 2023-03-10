#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: array of string arguments
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		puts("0");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if ((num == 0 && argv[i][0] != '0') || num < 0)
			{
				puts("Error");
				return (1);
			}

			sum += num;
		}

		printf("%d\n", sum);
	}

	return (0);
}
