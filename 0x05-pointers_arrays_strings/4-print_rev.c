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
	int str_len = 0;

	while (*s != '\0')
	{
		s++;
		str_len++;
	}

	while (str_len > 0)
	{
		s--;
		_putchar(*s);
		str_len--;
	}

	_putchar('\n');
}

