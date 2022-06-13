#include "main.h"


/**
 * reset_to_98 - function that updates the value of a pointer
 *
 * @n: pointer whose value is reset to 98
 *
**/

void reset_to_98(int *n)
{
	int p = &n;
	*n = 402;

	p = 98;
}





