#include "main.h"                                                                     
#include <stdio.h>

/**
 * print_sign - a function that prints the sign of a number.
 *
 * @n - the character that the function tests.
 *
 * Return: 1 if in is positive, 0 if n is zero,
 *	-1 if negative, and / if n is not a digit. 
*/
int print_sign(int n)
{
	if (n > 0) 
	{
		_putchar('+');
		return (1);
	}
	
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('-');
		return ('/');
	}
}
