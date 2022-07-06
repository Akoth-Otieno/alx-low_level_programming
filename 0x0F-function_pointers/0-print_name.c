#include "function_pointers.h"
#include <stdio.h>
#define secure_free(f) (free(f), (f) = 0)

/**
 * print_name - a function that prints a name.
 * @name: the pointer to the character variable to be printed.
 * @f: a pointer to a function
 * Return: void
*/


void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

