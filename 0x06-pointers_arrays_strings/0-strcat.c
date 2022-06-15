#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - a function that concatenates two strings.
 *
 * @dest: string to be concatenated.
 *
 * @src: string to concatenate.
 *
 * Return: the concatenated string.
 *
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]!='\0'; i++);

	for (j = 0; src[j]!='\0'; j++, i++)
  	{
  		dest[i] = src[j];
  	}
	dest[i] = '\0';

	return (dest);
}

