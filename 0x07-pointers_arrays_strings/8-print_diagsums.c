#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a: the 2x2 matrix of integers
 * @size: the size of the matrix
 *
 * Return: void (nothing)
 *
*/

void print_diagsums(int *a, int size)
{
	int b, square = size * size, sum = 0, sum1 = 0;

	for (b = 0; b < square; b += size + 1)
		sum += a[b];

	for (b = size - 1; b < square - 1; b += size - 1)
		sum1 += a[b];

	printf("%d, %d\n", sum, sum1);

}

