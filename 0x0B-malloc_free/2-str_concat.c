#include "main.h"

/**
 * _strlen - create array
 * @s: pointer to string
 *
 * Description: get length of string
 *
 * Return: int
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat - create array
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Description: concatenate two strings
 *
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i;
	char a[] = "";
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = a;

	if (s2 == NULL)
		s2 = a;

	len1 = (unsigned int) _strlen(s1);
	len2 = (unsigned int) _strlen(s2);

	p = malloc((len1 + len2 + 1) * sizeof(char));

	if (!p)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(p + i) = s1[i];

	for (i = 0; i < (len1 + len2); i++)
		*(p + i + len1) = s2[i];

	if (i == len2 + len1)
		*(p + i) = '\0';

	return (p);
}
