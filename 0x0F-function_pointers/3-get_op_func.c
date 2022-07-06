#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function that selects the correct function to
 * 	perform a mathematical operation
 * @s: th mathematical operation to carry out.
 *
 * Return: a pointer to the function that corresponds to the
 * 	operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int i;

	while (s && ops[i].op != NULL)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		++i;
	}

	return (NULL);
}
