#include "3-calc.h"

/**
 * op_add - add
 * @a: first variable
 * @b: second variable
 * Return: a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts one variable from a nother
 * @a: first number
 * @b: second number
 * Return: a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -function that multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: the product of two numbers ( a*b).
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @athe first number
 * @b: the second number
 * Return: the quotient of two numbers.
 */

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of a division
 * @a: first number
 * @b: second number
 * Return: the remainder after division (a % b).
 */

int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
