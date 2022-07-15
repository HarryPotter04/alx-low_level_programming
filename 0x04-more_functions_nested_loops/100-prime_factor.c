#include <stdio.h>

/**
 * main - prints prime numbers
 * Return: Always 0
 */

int main(void)
{
	long int x = 612852475143;
	long int j;

	for (j = 2; j < x; j++)
	{
		if (x % j == 0)
		{
			x = x / j;
		}
	}
	printf("%ld\n", j);
	return (0);
}
