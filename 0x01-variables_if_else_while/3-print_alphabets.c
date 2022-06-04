#include <stdio.h>

/**
 * main - Function that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 *
 * capital - Function that prints the alphabet uppercase.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
return (0);
}

int capital(void)
{
char Letter;
for (Letter = 'A'; Letter <= 'Z'; Letter++)
{
putchar(Letter);
}
return (0);
}
