#include "main.h"

int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 *
 * @n: the input variable (the square of a number).
 *
 * Return: the natural square root of a number or -1, if the
 * input variable is a negative number.
 *
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(1, n));
	}
}

/**
 * _sqrt - function that calculates the square root of an input
 * variable.
 *
 * @init: initial value
 * @sroot: square root
 * Return: the square rooot of a variable or -1 if variable is negative.
 */
int _sqrt(int init, int sroot)
{
	if (init > sroot)
		return (-1);
	else if (init * init == sroot)
		return (init);
	return (_sqrt(init + 1, sroot));
}
