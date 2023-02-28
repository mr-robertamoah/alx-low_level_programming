#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of string
 * @s: the pointer of the string
 *
 * Description: gets the length of a string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * rev_string - reverse
 * @s: the pointer of the string
 *
 * Description: reverse a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i, j;
	char tmp;

	for (i = len - 1, j = 0; j < (len / 2); i--, j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
