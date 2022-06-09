#include "main.h"
#include <stdio.h>

/**
 * main - function that prints natural numbers below 1024
 *	that are multiples of 3.
 *
 * Return: Always (0) Success
 *
*/
int main(void)
{
int num;
int sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
