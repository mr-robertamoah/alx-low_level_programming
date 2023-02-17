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
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int counter;

	for (counter = 0; counter < 26; counter++)
		putchar(letters[counter]);

	putchar('\n');
	return (0);
}
