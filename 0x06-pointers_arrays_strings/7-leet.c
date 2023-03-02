#include <stdio.h>

/**
 * leet - convert
 * @s: pointer to the string
 *
 * Description: convert some letters to numbers
 *
 * Return: void
 */

char *leet(char *s)
{
	int i, j;
	char letters[] = "AEOTL";
	char digits[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		for (; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] + 32)
				s[i] = digits[j];
		}
	}

	return (s);
}
