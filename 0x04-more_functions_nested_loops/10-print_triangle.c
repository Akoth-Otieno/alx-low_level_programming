#include "main.h"

/**
 * print_traingle - a function that prints a triangle.
 * @size: the size of the triangle.
 * Description - If size is 0 or less, the function should print
 * only a new line. Otherwise, print triangle.
 *
 * Return: void.
 */

void print_triangle(int size)
{
	int linerow, linelen;

	for (linerow = 1; linerow <= size; linerow++)
	{
		for (linelen = size; linelen > linerow; linelen--)
			_putchar(' ');
		for ( ; linelen > 0; --linelen)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
