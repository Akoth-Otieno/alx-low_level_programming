#include "main.h"

/**
 * _isdigit - a function that checks if a parameter is a digit
 * between 0 and 9.
 * @c: input paramater
 * Return: 1 if c is a digit, else returns 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
