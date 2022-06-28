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
	unsigned int i = 0;
	char *dup;

	if (dup == 0)
		return (NULL);

	dup = malloc(sizeof(char) * i);

	if ((sizeof(char) * i) > i)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = dup[i];
	}
	dup[i] = '\0';
	return (dup);

}
