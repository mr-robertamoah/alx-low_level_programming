#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this randomly sets the value of n
 * and prints if it is negative or positiye.
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int n;
	char nType[100];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		type = " is zero";
	else if (n > 0)
		type = " is positive";
	else
		type = " is negative";

	printf("%d%s\n", &n, type);
	return (0);
}
