#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that print the second half of a string.
 *
 * @str: the string that is manipulated.
 *
 * Return: void
 *
*/

void puts_half(char *str)
{
	int str_len, i, j;

	str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	if (str_len % 2 == 0)
	{
		for (i = str_len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}


	}

	else if (str_len % 2 = 1)
	{
		for (n = (str_len - 1) / 2; n < str_len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
}
