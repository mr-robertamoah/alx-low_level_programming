#include "main.h"

/**
 * _strlen - length
 * @s: pointer to string
 *
 * Description: find length of string
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
 * string_nconcat - concatenate
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: integer
 *
 * Description: concatenate s1 with n chars of s2
 *
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, len1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	p = malloc((len1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(p + i) = s1[i];

	for (j = 0; j < n; j++)
		*(p + i + j) = s2[j];

	*(p + i + j + 1) = '\0';

	return (p);
}
