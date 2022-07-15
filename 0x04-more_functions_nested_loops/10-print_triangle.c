#include "main.h"

/**
 * print_triangle - a function that prints a triangle.
 * @size: the size of the triangle.
 * Description - If size is 0 or less, the function should print
 * only a new line. Otherwise, print triangle.
 *
 * Return: void.
 */

void print_triangle(int size)
{
	int a, i, j;

	a = 0;
	i = size - 1;
	while (a < size)
	{
		i = size - 1 - a;
		j = a + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		a++;
	}

	if (size <= 0)
		_putchar('\n');
}
