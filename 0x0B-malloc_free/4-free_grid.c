#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2-D array
 *
 * @grid:
 *
 * @height:
 *
 * Return: Always 0 (Success)
 *
*/

void free_grid(int **grid, int height)
{
	int i;
	int *pointer;

	for (i = 0; i < height; i++)
	{
		pointer = grid[i];
		free(pointer);
	}

	free(grid);
}
