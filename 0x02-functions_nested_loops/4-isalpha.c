#include "main.h"
#include <stdio.h>

/**
 * _isalpha - the function that checks for alphabetic characters.
 *
 * @c: the character that the function will check
 *
 * Return: Always 0 (Success)
 *
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
