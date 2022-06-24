#include "main.h"

/**
 * main - a function that prints all the arguments passed into it
 *
 * @argc: counts the number of arguments passed into the function
 *
 * @argv: a one dimensional array that points to a string
 *
 * Return: Always zero (0)
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
