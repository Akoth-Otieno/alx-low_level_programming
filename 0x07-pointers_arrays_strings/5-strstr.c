#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that finds the first occurrence of the substring
 * needle in the string haystack.
 *
 * @haystack: the input/subject string.
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located of the the string
 * needle or NULL if needle is not found.
 *
*/

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}

		if (needle[b])
		{
			a++;
			b = 0;
		}

		else
			return (haystack + a);
	}
	return (NULL);
}
