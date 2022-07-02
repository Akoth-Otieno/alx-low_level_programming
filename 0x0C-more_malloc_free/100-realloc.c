#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using
 * malloc and free.
 * @ptr: pointer to the previous memory address.
 * @old_size: bytes of ptr.
 * @new_size: new bytes of new memory
 * Return: NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy, *new_malloc;
	unsigned int i;

	if (ptr != NULL)
	copy = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	new_malloc = malloc(new_size);
	if (new_malloc == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(new_malloc + i) = copy[i];
	}
	free(ptr);
return (new_malloc);
}
