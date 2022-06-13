#include "main.h"

/**
 * swap_int(int *a, int *b) - function that swaps the values of two integers.
 *
 * @a: variable whose value to swap with b.
 *
 * @b: variable whose value to swap with c.
 *
 * Return: void
 *
*/

void swap_int(int *a, int *b)
{
	int *c;
	*a + *b = *c;
	*a = *c - *b;
	*b = *c - *a;
}
