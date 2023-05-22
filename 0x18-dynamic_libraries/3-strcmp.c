#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Description: compare two strings
 *
 * Return: char *
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int i, result = 0;

	for (i = 0; i <= len2 || i <= len1; i++)
	{
		result = s1[i] - s2[i];

		if (i > len1)
			result = s2[i] * -1;

		if (i > len2)
			result = s1[i];

		if (!(result == 0))
			return (result);
	}

	return (result);
}
