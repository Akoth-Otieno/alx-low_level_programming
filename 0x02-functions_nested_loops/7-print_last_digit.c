#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @num: the number whose last digit is printed
 *
 * Return: the value of the last digit of a number.
 *
*/
int print_last_digit(int num)
{
if (num < 0)
num = num * -1;
_putchar((num % 10) + '0');
return (num % 10);
}
