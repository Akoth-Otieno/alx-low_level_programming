#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @str: the string whose elements are to be manipulated.
 *
 * Return: the new string
 *
*/

char *rot13(char *str)
{
	int i, j;
	char alphbt[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphbt[j] == *(str + i))
			{
				*(str + i) = rot13[j];
				break;
			}
		}
	}
	return (str);
}
