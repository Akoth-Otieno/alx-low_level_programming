#include "main.h"

/**
 * _memcpy - a function that copies n bytes from src to dest
 *
 * @dest: memory area to copy bytes to
 * @src: memory area  to copy n bytes from
 * @n: number of bytes to copy
 *
 * Return: the pointer to dest (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
