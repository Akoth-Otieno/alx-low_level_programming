#include <stdio.h>

/**
 * main - Function that prints out all permutations of
 *	all three-digit numbers.
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
int first_digit;
int second_digit;
int third_digit;

for (first_digit = 0; first_digit < 8; first_digit++)
{
	for (second_digit = first_digit + 1; second_digit < 9; second_digit++)
	{
		for (third_digit = second_digit + 1; third_digit < 9; third_digit++)
		{
			putchar((first_digit % 10) + '0');
			putchar((second_digit % 10) + '0');
			putchar((third_digit % 10) + '0');

			if (first_digit == 7 && second_digit == 8 && third-digit == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

putchar('\n');

return (0);
}
