#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints a chessboard
 *
 * @a: an array input that points to the pieces to print
 * Return: void
 *
*/

void print_chessboard(char (*a)[8])
{
	int b = 0, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}

		_putchar('\n');
	}
}
