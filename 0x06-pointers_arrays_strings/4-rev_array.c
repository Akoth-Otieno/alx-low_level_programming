#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers.
 *
 * @a: the array of integers
 * @n: the number of elements in the array
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int temp;

	for (i = 0; 1 < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
