#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches the first character in a string
 * that matches any characters sepcified in the second srting.
 *
 * @s: the subject or input string/ string to be scanned.
 * @accept: string that has the characters to be matched.
 *
 * Return: a pointer to the character in the first string that matches
 * one of the characters in the first string.
 *
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b])
			return (s + a);
	}
	return (NULL);
}
