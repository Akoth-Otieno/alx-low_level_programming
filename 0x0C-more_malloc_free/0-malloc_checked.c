#include "main.h"
#include <stdlib.h>

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
	unsigned int *ptr_b;
	
	ptr_b =(unsigned int *)malloc(sizeof(b));

	if (ptr_b !=  NULL)
	{
		return (ptr_b);
	}

	else
	{
		return (NULL);
	}

}
