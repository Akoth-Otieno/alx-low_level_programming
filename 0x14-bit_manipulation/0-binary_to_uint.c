#include "main.h"

/**
 * binary_to_uint - a function that  converts a binary number to an integer.
 * @b: a pointer to a string of 0s and 1s.
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i)  == '1')
			decimal = (decimal << 1) | 1;/*insert 1 and shift left.*/
		else if (*(b + i) == '0')
			decimal <<= 1; /*only shift left*/
		else
			return (0);
	}
	return (decimal);

}
