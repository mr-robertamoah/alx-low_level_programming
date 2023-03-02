#include <stdio.h>

/**
 * string_toupper - toupper
 * @s: pointer to the string
 *
 * Description: change lower to upper cases
 * integer array
 *
 * Return: void
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}

	return (s);
}
