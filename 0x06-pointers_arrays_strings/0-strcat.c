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
	char str_cat;

	str_cat = strcat(dest,src);

	return (str_cat);
}

