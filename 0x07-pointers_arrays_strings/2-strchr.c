#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to be located
 * @c: the character to be located within a string
 * Return: the address of the located character (c) or NULL
 *
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; *s; j++)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == *s)
		return (s);
	return (NULL);
}
