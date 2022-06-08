#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers between 0 and 98
 *
 * @n: the initial variable that the loop will start counting from
 *
 * Return: void/ return nothing/there is not return statement.
 *
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		printf("%d\n", n);
		}
	}

	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		printf("%d\n", n);
		}
	}
}
