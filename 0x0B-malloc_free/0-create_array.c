#include "main.h"

/**
 * create_array - create array
 * @size: number of bytes of the array
 * @c: char to initialize array with
 *
 * Description: create an array of chars and initialize
 * it with a specific char
 *
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (!p)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
