#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: the string to be reversed
 *
 * Return: void
 *
*/

void rev_string(char *s)
{
	int i;
	int str_len;
	int left, right, temp;

	str_len = strlen(s);
	left = 0;
	right = str_len - 1;

	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
}
