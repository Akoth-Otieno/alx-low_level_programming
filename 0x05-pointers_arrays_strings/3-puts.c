#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string, followed by a new line stdout.
 *
 * @str: the string to be manipulated.
 *
 * Return: void
 *
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
