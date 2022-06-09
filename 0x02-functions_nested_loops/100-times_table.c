#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n time table, starting with zero.
 *
 * @n: the variable whose times table the function prints
 *
 * Return: void, as the function returns nothings. Thus no return statement.
 *
 */
void print_times_table(int n)
{
int num;
int multiplier;
int product;

if (n >= 0 && n <= 15)
{
	for (num = 0; num <= n; num++)
	{
		_putchar('0');

		for (multiplier = 1; multiplier <= n; multiplier++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * multiplier;

			if (product <= 99)
				_putchar(' ');
			if (product <= 9)
				_putchar(' ');

			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10)) % 10 + '0');
			}
			else if (product <= 99 && product >= 10)
			{
				_putchar((product / 10) + '0');
			}

			_putchar((product % 10) + '0');

		}

		_putchar('\n');

	}
	return;
}
