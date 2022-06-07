#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function that prints the alphabet
 *	in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
*/
void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
