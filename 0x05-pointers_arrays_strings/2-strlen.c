#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string whose length is to be returned.
 *
 * Return: length of the string.
 *
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
	}

	return (length);

}
