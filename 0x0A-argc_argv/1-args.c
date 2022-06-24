#include "main.h"

/**
 * main - a function that prints the number of arguments
 *
 * @argc - the number if arguments passed in a function.
 *
 * @argv: a one-dimensional array containing the function arguments
 *
 * Return: Always 0 (Success)
 *
*/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
