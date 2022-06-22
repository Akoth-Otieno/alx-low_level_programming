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
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}

