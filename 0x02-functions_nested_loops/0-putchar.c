#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _putchar - function that prints "_putchar"
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
char c[8] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
	_putchar(c[i]);
}
	_putchar('\n');
return (0);
}
