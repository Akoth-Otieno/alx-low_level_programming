#include "main.h"

/**
 * print_diagonal - a function that prints a diagonal line in the terminal.
 * @n: the number of times the character '\' should be printed.
 * Return: either \ or \n (a blank line).
 */

void print_diagonal(int n)
{
	int linerow, linelen;

	if (n <= 0)
		_putchar('\n');


	for (linerow = 0; linerow < n; linerow++)
	{
		for (linelen = 0; linelen < linerow; linelen++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
