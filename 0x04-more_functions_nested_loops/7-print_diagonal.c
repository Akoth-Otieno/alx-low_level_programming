#include "main.h"

/**
 * print_diagonal - a function that prints a diagonal line in the terminal.
 * @n: the number of times the character '\' should be printed.
 * Return: either \ or \n (a blank line).
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		return ('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}
