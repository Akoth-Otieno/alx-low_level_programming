#include "main.h"
#include <stdio.h>

/**
 * _abs - function that prints the absolute value of a number.
 *
 * @a: the number whose absolute value is tested
 *
 * Return: absolute value of a number
 *
*/
int _abs(int a)
{

if (a < 0)
{
	a = a * -1;
}

return (a);
}
