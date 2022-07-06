#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the input array.
 * size: the size of/ number of elements in the array.
 * @cmp: a pointer to the function int_index.
 * Return: index of the first element in the array that is not 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	
	if (cmp != NULL && array != NULL && size => 1)
	{
		for ( i = 0; i < size; i++)
			cmp(array[i]);
		return (array[i]);
	}

	else 
	{
		return (-1);
	}

}
