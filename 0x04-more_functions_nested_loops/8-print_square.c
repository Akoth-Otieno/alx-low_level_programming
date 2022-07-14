#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: the size of the square.
 * Return: # or a blank line.
 */

void print_square(int size)
{
	int sq_num;
	int sq_len;

	for (sq_num = 0; sq_num < size; sq_num++)
	{
		for (sq_len = 0; sq_len < size; sq_len++)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
