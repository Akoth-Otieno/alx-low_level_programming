#include "function_pointers.h"

/**
 * int_index - a function that compares the elements of an aray.
 * @array: the input array.
 * @size: number of elements in an array.
 * @cmp: a pointer to the int_index function.
 * Return: the index of the first elements in the array for which
 * 	the cmp function does not return 0. Returns -1 if no
 * 	element matches or if the number ofelements in the array
 * 	is less than 1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);

}
