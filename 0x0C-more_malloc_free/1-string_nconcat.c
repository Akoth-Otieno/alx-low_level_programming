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
	unsigned int i, str_len1 = 0, str_len2 = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[str_len1] != '\0')
	{
		str_len1++;
	}

	while (s2[str_len2] != '\0')
	{
		str_len2++;
	}

	new_str = malloc((str_len1 + n + 1) * sizeof(char));

	if (n > str_len2)
		n = str_len2;

	if (new_str == NULL)
		return (0);

	for (i = 0; i < str_len1; i++)
	{
		new_str[i] = s1[i];
	}

	for (i = 0; i < (str_len1 + n); i++)
	{
		new_str[i] = s2[i - str_len1];
	}
	new_str[i] = '\0';

	return (new_str);
}
