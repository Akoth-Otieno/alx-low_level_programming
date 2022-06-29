#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a two dimensional
 * array of integers.
 *
 * @width: the rows of the elements of the array
 *
 * @height: the columns of the elements of the array
 *
 *
 * Return: pointer the the array or NULL
 *
*/

int **alloc_grid(int width, int height)
{
	int **arr, rows, cols;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (!arr)
		return (NULL);

	for (rows = 0; rows < height; ++rows)
	{
		arr[rows] = (int *) malloc(sizeof(int) * width);

		if (!arr[rows])
		{
			if ( --rows > -1)
				free(arr[rows]);
			free(arr);
			return (NULL);
		}

		for (cols = 0; cols < width; ++cols)
			arr[rows][cols] = 0;

	}

	return (arr);


}
