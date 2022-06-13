#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - a function that prints a string in reverse.
 *
 * @s: the strin to be printed in reverse.
 *
 * Return: void
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*strrev(s));
		s++;
	}
	_putchar('\n');
}
