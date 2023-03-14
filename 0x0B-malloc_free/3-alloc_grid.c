#include "main.h"

/**
 * alloc_grid - create array
 * @width: int and size of matrix
 * @height: int and size of matrix
 *
 * Description: create a pointer to an array of
 * int arrays
 *
 * Return: array of int arrays
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int *q;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (!p)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		q = malloc(width * sizeof(int));

		if (!q)
			return (NULL);

		for (j = 0; j < width; j++)
			*(q + j) = 0;

		*(p + i) = q;
	}

	return (p);
}
