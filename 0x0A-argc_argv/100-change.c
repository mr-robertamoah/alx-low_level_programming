#include <stdio.h>
#include <stdlib.h>

/**
 * get_change - change
 * @cent: current cent value
 * @amt: amount being changed
 *
 * Description: determine the number of coins
 * a change will have
 *
 * Return: returns 0 (Success)
 */
int get_change(int cent, int amt)
{
	int nextcent, mod, n;

	switch (cent)
	{
		case 25:
			nextcent = 10;
			break;
		case 10:
			nextcent = 5;
			break;
		case 5:
			nextcent = 2;
			break;
		case 2:
			nextcent = 1;
			break;
		default:
			break;
	}

	mod = amt % cent;
	n = amt / cent;

	if (!mod)
		return (n);

	return (n + get_change(nextcent, amt - (n * cent)));
}

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
	int num;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		puts("0");
	}
	else
	{
		printf("%d\n", get_change(25, num));
	}

	return (0);
}
