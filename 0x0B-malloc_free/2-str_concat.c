#include "main.h"
#include <stdlib.h>

/**
 * _str_concat - a function that concatenates two strings, s1 and s2.
 * 
 * @s1: the first string
 *
 * @s2: the second string
 *
 * Return: the concatenated string OR NULL
 *
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i;
	int a, b, _strlen = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	concat_str = (char *)malloc((a + b + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];

	for (; s2[_strlen] != '\0'; i++)
	{
		concat_str[i] = s2[_strlen];
		_strlen++;
	}
	return (concat_str);
}
