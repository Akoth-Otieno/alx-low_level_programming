#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a new string which is
 * a duplicate of the string str.
 *
 * @str: the input string/subject string.
 *
 * Return: pointer to the duplicated string or NULL (if insufficient memory
 * was available'
 *
*/

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size = 0;
	char *dup;

	if (size == 0)
		return (NULL);

	dup = malloc(sizeof(char) * size);

	if ((sizeof(char) * size) > size)
		return (NULL);

	for (i = 0; dup[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	str[i] = '\0';
	return (str);

}
