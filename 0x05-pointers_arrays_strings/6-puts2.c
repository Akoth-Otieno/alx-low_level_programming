#include "main.h"
#include <stdio.h>
#include <string.h>

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
	int str_len, i;

	str_len = strlen(str);

	for ( i = 0; i < str_len - 1; i++)
	{
		str_len = str_len + 2;
		_putchar(str_len);
	}
	
	_putchar('\n');

}
