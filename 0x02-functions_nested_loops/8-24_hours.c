#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function that prints every minute
 *	between 0000 H and 2359 H.
 *
 * Return: does not return any value
 *
**/
void jack_bauer(void)
{
float minutes;
float hours;

for (hours = 00.00; hours <= 23.59; hours++)
{
	for (minutes = 0; minutes <= 60; minutes++)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		_putchar ('\n');
	}

}

_putchar('\n');

}
