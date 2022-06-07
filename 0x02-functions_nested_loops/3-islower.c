#include "main.h"
#include <stdio.h>

/**
 * _islower - function that checks for a lowercase character.
 *
 * Return: Always 0 (Success)
 *
*/
int _islower(int c)
{
int c;

if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
