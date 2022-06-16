#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * Return: the difference between the two strings, if any.
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*(s1 + a) && *(s2 + a) && (*(s1 + a) == *(s2 + a)))
		a++;
	return (*(s1 + a) - *(s2 + a));
}
