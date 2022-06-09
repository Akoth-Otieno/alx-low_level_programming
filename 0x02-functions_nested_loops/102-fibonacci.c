#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the first 50 fibonacci numbers,
 *	starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
unsigned long num1 = 0;
unsigned long num2 = 1;
int i;
unsigned long sum;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		sum = num2;
		printf("%lu", sum);

		if (i == 49)
			printf("\n");

		else
			printf(", ");
	}
	return (0);

}



