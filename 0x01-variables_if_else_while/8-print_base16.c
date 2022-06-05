#include <stdio.h>

/**
 * main - function that prints all base16 numbers
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
int hex;
char HEX;

for (hex = 0; hex < 10; hex++)
{
putchar((num % 10) + '0');
}

for (HEX = 'a'; HEX <= 'f'; HEX++)
{
putchar(HEX);
}

putchar('\n');

return (0);
}
