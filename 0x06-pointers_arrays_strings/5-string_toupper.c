#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase.
 * @s: string whose letters are converted to uppercase
 *
 * Return: the new string
 *
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i];
		}
	}
	return (s);
}
