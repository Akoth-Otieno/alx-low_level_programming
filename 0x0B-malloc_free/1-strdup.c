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
	unsigned int a, b;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	dup = (char *)malloc(sizeof(char) * (a+1));

	if (dup == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		str[a] = dup[b];
	}
	return (dup);

}
