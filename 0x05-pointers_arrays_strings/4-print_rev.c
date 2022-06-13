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
	int str_len;

	for (str_len = 0; str_len > 0; str_len--)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}
