#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates a memory for an array.
 * @nmemb: number of elements in the array
 * @size: number of bytes of each element
 * Return: a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr, *arr;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (0);

	j = size * nmemb;
	arr = malloc(j);

	ptr = (char *)arr;

	if (ptr != NULL)
	{
		for (i = 0; i < j; i++)
			ptr[i] = 0;
		return (ptr);

	}
	return (NULL);
}
