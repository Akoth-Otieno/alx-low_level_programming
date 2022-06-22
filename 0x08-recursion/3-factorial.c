#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: inout variable
 *
 * Return: the factorial of a given variable or -1 if the variable is
 * less than 0.
 *
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
