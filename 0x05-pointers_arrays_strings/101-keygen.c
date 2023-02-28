#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generate
 *
 * Description: randomly generate valid passwords
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	char *uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lowers = "abcdefghijklmnopqrstuvwxyz";
	char *digits = "0123456789";
	char *symbols = "!@#$^&*?";
	char password[100];
	int i, rnum;

	srand(time(NULL));

	for (i = 0; i < 50; i++)
	{
		rnum = rand() % 4;

		if (rnum == 1)
			password[i] = uppers[i];
		else if (rnum == 2 || (rnum == 0 && i == 0))
			password[i] = lowers[i];
		else if (rnum == 3)
			password[i] = digits[i];
		else
			password[i] = symbols[i];

		printf("%c", password[i]);
	}

	return (0);
}
