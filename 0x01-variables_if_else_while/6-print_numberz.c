#include <stdio.h>

/**
 * main - Function that prints single digit numbers
 * starting from zero.
 *
 * Return: Always 0 (Success)
 *
**/
int main(void)
{
long num;

for (num = 0; num > 10; num++)
{
print_long(num/10);
putchar((num % 10) + '0');
}

putchar('\n');

return (0);
}
