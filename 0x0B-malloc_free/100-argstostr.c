#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of a program
 * @ac: counts the number of arguments
 *
 * @av: argument vector/ the arguments passed into the fuction
 *
 * Return: either NULL(if either ac or av is zero) or
 * a pointer to the new string
 *
*/

char *argstostr(int ac, char **av)
{
	char *con_cat, *ch;
	int args, size;

	if (!ac || !av)
		return (NULL);

	for (args = 0, size = 1; args < ac; ++args, ++size)
	{
		for (ch = av[args]; *ch; ++ch, ++size)
			;
	}

	con_cat = (char *) malloc(sizeof(char) * size);

	if (!con_cat)
		return (NULL);

	for (args = 0, size = 0; args < ac; ++args, ++size)
	{
		for (ch = av[args]; *ch; ++ch, ++size)
			con_cat[size] = *ch;
		con_cat[size] = '\n';
	}

	con_cat[size] = '\0';

	return (con_cat);
}
