#include "main.h"
#include <stdlib.h>
void *malloc(size_t size);

/**
 * malloc_checked - a function that allocates memory in the heap
 * using malloc.
 *
 * @b: the variable which is to be allocated memory.
 *
 * Return: a pointer to the allocated memory.
 *
**/

void *malloc_checked(unsigned int b)
{
	
	void *ptr_b;

	ptr_b = malloc(b);

	if (ptr_b == NULL)
	{
		exit(98);
	}

	else
	{
		return (ptr_b);
	}

}
