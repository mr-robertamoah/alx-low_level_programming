#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - get bytes
 * @s: pointer to buffer
 * @accept: pointer to chars to search for
 *
 * Description: search for and count accept
 * chars c in s
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (_strchr(accept, *(s + i)))
			return ((s + i));
	}

	return (NULL);
}
