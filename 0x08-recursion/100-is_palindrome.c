#include "main.h"
#include <stdio.h>

int _strlen(char *s);
int is_palindrome_reverse(char *s, int len);

/**
 *_strlen - function that measures the length of a string

 * @s: input string whose length is determined
 *
 * Return: the length of the s
 */

int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen(s + 1) + 1);
}

/**
 * is_palindrome - function that tests whether a string is a palindrome
 * or not.
 *
 * @s: input/subject string
 *
 * Return: 1 if the string, s, is palindrome or 0 if it is not.
 *
*/

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (len <= 1)
		return (1);
	return (is_palindrome_reverse(s, len));
}

/**
 * is_palindrome_reverse - the function that returns a reversed string
 *
 * @s: input string
 *
 * @len: the length of the string
 *
 * Return: A reverse string
 */

int is_palindrome_reverse(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (is_palindrome_reverse(s + 1, len - 2));
	}
	else
		return (0);

}
