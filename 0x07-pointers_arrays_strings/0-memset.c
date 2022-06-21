#include "main.h"

/**
 * _memset - function that fills the first n bytes of memory
 * area pointed to by s.
 *
 * @s: the memory space to be filled
 * @b: number of bytes to fill s with
 * @n: number of spaces to fill
 *
 * Return: the pointer (s)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for ( j = 0; j < n; j++)
	{
		*(s + i) = b;
	}

	return (s);

}
