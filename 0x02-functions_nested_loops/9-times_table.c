#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table,
 *	starting with 0.
 *
 * Return: void
 *
*/
void times_table(void)
{
int product;
int nine;
int i;

for (nine = 0; nine <= 9; nine++)
{
	for (i = 0; i <= 9; i++)
	{
	product = (nine * i);
	
	if (i != 0)
	{
		_putchar(',');
		_putchar(' ');
	}
	
	if (product >= 10)
	{	
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
	}

	else if (product < 10 && i != 0)
	{
		_putchar(' ');
		_putchar((product % 10) + '0');
	}

	else 
	{
		_putchar((product % 10) + '0');
	}

	}

	putchar('\n');
}
}
