#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer using putchar,
 * without arrays or pointers.
 *
 * @n: the variable to be printed
 *
 * Return: void/nothing/no return statement
 *
*/

void print_number(int n)
{
	if (n < 0) 
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	if (n > 0)
	{
		_putchar(n%10 + '0');
	}


}
