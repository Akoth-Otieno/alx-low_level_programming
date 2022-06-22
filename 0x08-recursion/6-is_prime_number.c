#include "main.h"
int checkPrime(int f, int p);

/**
 * checkPrime - tests whether a variable is only divisible
 * by itself or 1.
 * @f: checks for factors
 * @p: input varibale to be tested
 *
 * Return: 1 if prime, 0 if not
 */
int checkPrime(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (checkPrime(f + 1, p));
}

/**
 * is_prime_number - function that tests if the input variable is
 * a prime number.
 *
 * @n: the input variable
 *
 * Return: 1 if the variable is a prime number or 0 if it is not.
 *
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checkPrime(2, n));
}
