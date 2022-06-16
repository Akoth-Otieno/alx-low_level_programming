#include "main.h"

/**
 * *_strncat - a function that concatenates two strings, using
 * at most n bytes.
 *
 * @dest: the first string.
 * @src: the second string to be appended to dest.
 * @n: max number of bytes to append.
 *
 * Return: the resultant string(dest).
 *
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	if (j < n)
		*(dest + i) = *(src + j);

	return (dest);
}
