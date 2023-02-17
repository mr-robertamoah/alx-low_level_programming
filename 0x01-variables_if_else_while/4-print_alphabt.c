#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int counter;

	for (counter = 0; counter < 26; counter++)
	{
		if (letters[counter] == 'e' || letters[counter] == 'q')
			continue;
		putchar(letters[counter]);
	}

	for (counter = 0; counter < 27; counter++)
	{
		if (letters[counter] == 'e' || letters[counter] == 'q')
			continue;
		putchar(counter == 26 ? '\n' : (char) toupper(letters[counter]));
	}

	return (0);
}
