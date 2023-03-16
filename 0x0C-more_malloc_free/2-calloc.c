#include "main.h"

/**
 * _calloc - allocate
 * @nmemb: integer
 * @size: integer
 *
 * Description: allocate memory based on b
 *
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	p = malloc(nmemb * size);

	if (p == NULL || nmemb == 0 || size == 0)
		return (NULL);

	while (i < nmemb * size)
	{
		*(p + i) = 0;
		i++;
	}

	return ((void *) p);
}
