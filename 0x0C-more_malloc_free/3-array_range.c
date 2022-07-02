#include "main.h"
#include <stdlib.c>

/**
 * array_range -  function that creates an array of integers.
 * @min: the first elemnt in the array
 * @max: the last element in the array
 * Return: a pointer tothe created array.
 */

int *array_range(int min, int max)
{
	int *array, i = 0, j = min;

	if (min > max)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
		return (0);
	while (i <= max - min)
		array[i++] = j++;
	return (array);
}

