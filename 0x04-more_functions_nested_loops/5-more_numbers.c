#include "main.h"

/**
 * more_numbers - a function that prints 10 times the number, from
 * 0 to 14, followed by a new line.
 * Return: void
 */

void more_numbers(void)
{
	char i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');

	}
}
