#include <stdio.h>

/**
 * main - function that finds and prints the sum of
 *	the even-valued terms, followed by a new line.
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long i, num1, num2, sum, total;

	num1 = total = 0;
	num2 = 1;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (sum % 2 == 0 && sum < 4000000)
		{
			total += sum;
		}
		printf("%lu\n", total);
	}
	return (0);
}
