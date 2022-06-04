#include <stdio.h>

/**
 * main - a function that prints out the alphabet.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; ++a)
{
putchar (a);
}
putchar('\n');
return (0);
}
