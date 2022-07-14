#include "main.h"

/**
 * print_diagonal - a function that prints a diagonal line in the terminal.
 * @n: the number of times the character '\' should be printed.
 * Return: either \ or \n (a blank line).
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');


	for (i = 1; i < n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
