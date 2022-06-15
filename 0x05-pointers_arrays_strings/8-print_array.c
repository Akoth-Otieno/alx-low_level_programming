#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints the elements of an array
 *
 * @a: the array to be manipulated
 *
 * @n: number of elements in the array
 *
 * Return: void
 *
*/

void print_array(int *a, int n)
{
	short i = 0;

	while (n-- > 0)
	{
		printf("%d", a[i++]);
		if (n != 0)
			printf(", ");
	}

		printf("\n");
}
