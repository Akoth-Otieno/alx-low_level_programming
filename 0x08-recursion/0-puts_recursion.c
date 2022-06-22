#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *
 * @s: pointer to the character that we want to print out
 *
 * Return: void (there us no return value).
 *
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	_putchar('\n');
}

