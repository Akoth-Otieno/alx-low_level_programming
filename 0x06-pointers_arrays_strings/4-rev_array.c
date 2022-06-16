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
	int i = 0, temp;

	n = n - 1;
	while (i < n)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
		i++;
		n--;
}
