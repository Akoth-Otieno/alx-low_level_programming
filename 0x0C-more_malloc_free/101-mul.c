#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a function that multiplies two (positive) numbers.
 * @argc: number of arguments
 * @argv: arguments vector
 * Return Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	long int prod = 0;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", prod);
	return (0);
}
