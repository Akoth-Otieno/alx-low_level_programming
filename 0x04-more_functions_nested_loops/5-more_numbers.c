#include "main.h"

/**
 * more_numbers - a function that prints 10 times the number, from
 * 0 to 14, followed by a new line.
 * Return: void
 */

void more_numbers(void)
{
	int i, j, ones, tens;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			ones = j % 10;

			if (j > 9)
				_putchar(tens + '0');

			else
				_putchar(ones + '0');
		
		}
		_putchar('\n');

	}
}
