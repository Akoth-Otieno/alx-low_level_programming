#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees the memory address where the
 * 'struct dog' is stored.
 *
 * @d: struct dog
 */


void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
