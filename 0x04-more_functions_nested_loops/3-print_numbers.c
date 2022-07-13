#include "main.h"

/**
 * print_numbers - a function that prints the numbers from 0 t0 9
 * to the standard output, followed by a new line.
 * Return: void
 */

void print_numbers(void)
{
        int i;

        for (i = 0; i <= 9; i++)
        {
                putchar((i % 10) + '0');
        }
	putchar('\n');

}
