#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function that prints the letters of
 *	the alphabet 10X, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
*/
void print_alphabet_x10(void)
{

int i;
char letter;

for (i = 1; i <= 10; 1++)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}

return (0);
}
