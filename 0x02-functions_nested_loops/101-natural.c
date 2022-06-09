#include "main.h"
#include <stdio.h>

/**
 * multiples_of_3 - function that prints natural numbers below 1024
 *	that are multiples of 3.
 *
 * Return: void, hence no return statement
 *
*/
void multiples_of_3(void)
{
int num;
int sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			sum += num;
	}

	printf("%d\n", sum);

	_putchar('\n');
}