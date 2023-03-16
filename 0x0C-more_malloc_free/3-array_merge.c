#include "main.h"

/**
 * array_range - array
 * @min: integer
 * @max: integer
 *
 * Description: allocate memory based on min and max
 *
 * Return: int *
 */

int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; i++, j++)
		p[j] = i;

	return (p);
}
