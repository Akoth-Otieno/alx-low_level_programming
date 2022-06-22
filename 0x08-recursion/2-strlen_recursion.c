#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: the string whose length is returned.
 *
 * Return: the leng of the string (len)
 *
*/

int _strlen_recursion(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
	{
		return (0);
	}

	return (len);
}

