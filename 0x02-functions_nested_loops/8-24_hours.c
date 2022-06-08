#include "main.h"
#include <stdio.h>

/**
 * void jack_bauer - function that prints every minute
 *	between 0000 H and 2359 H.
 *
 * Return: does not return any value
 *
**/
void jack_bauer(void)
{
int minutes;
float hours;

for (hours = 00.00; hours <= 23.59; hours++)
{
	minutes = hours*60;
	_putchar((minutes % 10) + '0');
}

_putchar('\n');
}
