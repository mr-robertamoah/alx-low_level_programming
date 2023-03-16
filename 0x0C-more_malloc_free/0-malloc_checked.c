#include "main.h"

/**
 * malloc_checked - allocate
 * @b: size of memory to allocate
 *
 * Description: allocate memory based on b
 *
 * Return: void *
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
