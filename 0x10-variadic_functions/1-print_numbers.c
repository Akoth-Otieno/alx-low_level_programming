#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: a string that seperates the numbers
 * @n: the first of the unspecified number parameters passed in the function.
 * Return: each parameter.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		printf("%d", x);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
