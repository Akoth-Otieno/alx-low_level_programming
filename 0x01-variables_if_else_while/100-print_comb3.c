#include <stdio.h>

/**
 * main - function that prints all the possible
 * 	combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
int num;
int Num;

for (num = 0; num < 9; num++)
{
	for (Num = num + 1; Num < 10; Num++)
	{
		putchar((num % 10) + '0');
		putchar((Num % 10) + '0');

		if (num == 8 && Num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
}

putchar('\n');

return (0);
}
 
