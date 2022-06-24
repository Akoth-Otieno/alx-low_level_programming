#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a function that adds positive numbers, followed by
 * a new line.
 *
 * @argc: the number of arguments in the function declaration
 *
 * @argv: one dimensional array of of vector that point to strings
 *
 * Return: either 0 or 1
 *
*/

int main(int argc, char *argv[])
{
	int a = 0, b, c;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c]; c++)
		{
			if (isdigit(argv[b][c]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (b = 1; b < argc; b++)
	{
		a += atoi(argv[b]);
	}
	printf("%d\n", a);
	return (0);
}
