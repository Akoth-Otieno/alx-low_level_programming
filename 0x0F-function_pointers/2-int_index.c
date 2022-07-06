#include "function_pointers.h"

/**
 * int_index - a function that searches an array for an integer.
 * @array: the input array.
 * @size: the size of the integer.
 * @comp: a pointer to the function to be used to compare values.
 * Return: the index of the first element of the array for which
 * 	the cmp function does not return 0.If no element matches, 
 * 	return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size < 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]));
			return (i);
		}
	}

	return (-1);
}
