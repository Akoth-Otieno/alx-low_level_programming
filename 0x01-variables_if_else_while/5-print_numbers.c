#include <stdio.h>

/**
 * main - Function that prints all single digit numbers
 * starting fro zero.
 *
 * Return: Always 0 (Success)
 *
**/
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
printf(num);
}

putchar('\n');

return (0);
}
