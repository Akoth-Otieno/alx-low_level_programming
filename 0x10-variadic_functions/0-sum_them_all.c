#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the first of the unspecified number of parameters.
 *
 * Return: the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;
	va_start(args, n);


	if (n == 0)
		return (0);
	
	for (1 = 0; 1 < n; i++)
	{
		
		sum += va_args(args, unsigned int);

	}

	return (sum);
}
