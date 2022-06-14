#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a
 * string, starting with the first character.
 *
 * @str: the string that is manipulated.
 *
 * Return: void
 *
*/

void puts2(char *str)
{
	int a, b = 0;
	while (str[i] != '\0')
	{
		a++;
	}

	while (b < a)
	{
		_putchar(str[b]);
		b = b + 2;
	}

	_putchar('\n');
}
