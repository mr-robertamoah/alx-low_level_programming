#include "main.h"

/**
 * free_grid - free memory
 * @grid: array of int arrays
 * @height: int and size of matrix
 *
 * Description: free grid memory of ints
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}

	free(grid);
}
