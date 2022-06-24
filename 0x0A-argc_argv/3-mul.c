#include "main.h"
#include "stdio.h"

/**
 * main - function that multiplies two numbers
 *
 * @argc: number of arguments passed to a function
 *
 * @argv: one dimensional array argument vector of
 * pointers to strings
 *
 * Return: 0 if program receives 2 parameters,  else return 1.
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
