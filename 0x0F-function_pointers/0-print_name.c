#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: the pointer to the character variable to be printed.
 * @f: a pointer to a character
 * Return: void
*/


void print_name(char *name, void (*f)(char *))
{
	while(*name != '\0')
	{
		_putchar(*name);
		name++;
	}
}

/**
 * main - function that contains a pointer to a function.
 * @f: the pointer to a function.
 * Return: void
 */

void main ()
{
	void (*f)(char *);
	f = print_name;
}
