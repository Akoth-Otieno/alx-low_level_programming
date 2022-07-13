#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 t0 9,
 * followed by a new line.
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i%10) + '0');
		_putchar('\n');
	}
}
