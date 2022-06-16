#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @s: string to manipulate
 *
 * Return: the newly encoded string
 *
*/

char *leet(char *s)
{
	int i, j;
	char m[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (m[j] == *(s + i))
				*(s + i) = n[j];
		}
	}
	return (s);
}
