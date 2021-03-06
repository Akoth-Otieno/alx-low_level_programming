#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: input array
 * @size: number of elements in the array.
 * @action: a pointer to the function 'array_iterator.'
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
