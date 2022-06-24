#include "main.h"
#include <stdio.h>

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

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
