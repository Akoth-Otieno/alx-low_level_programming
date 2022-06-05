#include <stdio.h>

/**
 * main - Function that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
char letter;
char Letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

for (Letter = 'A'; Letter <= 'Z'; Letter++)                                                                                                     
{                                                                                                                                               
putchar(Letter);
}
putchar('\n');
return (0);
}
