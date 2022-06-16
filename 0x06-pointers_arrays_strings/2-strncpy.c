#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string (src) to another
 * string (dest).
 *
 * @src: string to copy
 * @dest: string to copy src to.
 * @n: bytes ofthe string src to copy
 *
 * Return: dest
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return(dest);
}
