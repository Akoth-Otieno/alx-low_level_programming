#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints a predetermined output to the terminal.
 *
 * Description - print Fizz if a num ber is a multiple of 3, Buzz if a number is
 * a multiple of 5, FizzBuzz if a number is a multiple of 3 and 5,
 * otherwise print the number.
 *
 * Return: void
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
