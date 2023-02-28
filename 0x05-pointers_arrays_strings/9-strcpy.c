#include "main.h"

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
 * _strcpy - copies string
 * @src: the pointer of the string
 * @dest: the pointer of the destination buffer
 *
 * Description: copies one string into a buffer location
 *
 * Return: char *
 */

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src) + 1;
	int i = 0;

	if (len <= 1)
	{
		_putchar('\n');
		return;
	}

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];

		i++;
	}

	dest[i] = src[i];

	return (dest);
}
