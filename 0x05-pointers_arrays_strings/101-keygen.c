#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that generates random
 * passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, new, n;
	int password[100];

	new = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		new += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - new - '0';
			new += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
