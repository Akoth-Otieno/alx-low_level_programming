#include "main.h"

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
	while (j < n && *(src + j))
	{
		*(dest + j) = *(src + j);
		j++;
	}
	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
