#include "main.h"

/**
 * _strspn - function that computes the length of the substring
 * of a string.
 *
 * @s: the subject/input string
 * @accept: pointer to the computed bytes from string s.
 *
 * Return: the computed length of s in bytes (compute)
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}

		if (!accept[b])
			break;
	}
	return (a);

}
