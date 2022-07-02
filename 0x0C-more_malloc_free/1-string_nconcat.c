#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that joins together two strings.
 * @s1: the first string
 * @s2: the second string.
 * @n: max number of  bytes of s2 to be joined to s1.
 * Return: a pointer to the concatenated string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int str_len1 = 0, str_len2 = 0;

	if (s1)
	{
		while (s1[str_len1])
			str_len1++;
	}

	if (s2)
	{
		while (str_len2 < n && s2[str_len2])
			str_len2++;
	}

	new_str = malloc(sizeof(char) * str_len1 + str_len2 + 1);
	if (!new_str)
		return (NULL);

	for (n = 0; n < str_len1; n++, new_str++)
		*new_str = s1[n];

	for (n = 0; n < str_len2; n++, new_str++)
		*new_str = s2[n];

	*new_str = '\0';

	return (new_str - str_len1 - str_len2);
}
