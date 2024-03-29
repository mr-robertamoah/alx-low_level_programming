#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate
 * @dest: pointer to string
 * @src: pointer to string
 * @n: number of bytes to copy
 *
 * Description: concatenant two strings
 *
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = _strlen(dest);
	int len2 = _strlen(src);
	int i;

	for (i = 0; i < len2; i++)
	{
		if (i == n)
			break;

		*(dest + len1 + i) = src[i];
	}

	*(dest + len1 + i) = '\0';

	return (dest);
}
