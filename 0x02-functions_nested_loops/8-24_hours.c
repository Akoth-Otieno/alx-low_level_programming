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
int minutes;
int hours;

for (hours = 0; hours < 24; hours++)
{
	for (minutes = 0; minutes < 60; minutes++)
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
