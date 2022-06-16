#include "main.h"

/**
 * cap_string - function that capitalizes all words of
 * a string.
 *
 * @s: the string to be manipulated
 *
 * Return: the string.
 *
*/

char *cap_string(char *s)
{
	int i, j;
	char seperators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 32;
				for (j = 0; seperators[j] != '\0'; j++)
					if (s[i] == seperators[j] && s[i + 1] >= 'A' && s[i + 1] <= 'Z')
						s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
