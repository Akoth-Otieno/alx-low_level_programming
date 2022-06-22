#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *
 * @s: input string to print out in reverse
 *
 * Return: void
 *
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\0');
	}

	else 
	{
		_print_rev_recursions(s+1);
		_putchar(*s);
	}

	return (0);

}
