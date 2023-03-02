#include <stdio.h>

/**
 * is_sep - separator
 * @c: the charater to check
 *
 * Description: check if a character is a valid
 * separator
 *
 * Return: 1 or 0
 */
int is_sep(char c)
{
	int result = 0;

	if (
		c == 32 || c == 9 || c == 10 ||
		c == ',' || c == ';' || c == '.' || c == '!' ||
		c == '?' || c == 34 || c == '(' || c == ')' ||
		c == '{' || c == '}'
	   )
		result = 1;

	return (result);
}

/**
 * cap_string - toupper
 * @s: pointer to the string
 *
 * Description: change lower to upper cases
 * integer array
 *
 * Return: void
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(i == 0 || is_sep(s[i - 1])))
			continue;

		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}

	return (s);
}
