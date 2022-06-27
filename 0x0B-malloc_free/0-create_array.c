#include "main.h"
#include <stddef.h>

/**
 * create_array - a function that creates an array of characters,
 * and initializes it with a specific character.
 * @size: size of the array in bytes
 * @c: the character to initialze the array with
 *
 * Return: pointer to the array or NULL
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (size == NULL)
		return (NULL);

	for ( i = 0; i < size; i++)
	{
		str[i] = c
	}
	return (str);
}
