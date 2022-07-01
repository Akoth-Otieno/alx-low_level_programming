#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: the size of memory to be allocated.
 *
 * Return: Pointer to the allocated memory (Success)
 *
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr_b;

	ptr_b = malloc(sizeof(b));

	if (ptr_b == NULL)
	{
		exit(98);
	}
	return(ptr_b);
}
