#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'x';

	while (z <= 'y')
	{
		putchar(z);
		z++;
	}

	putchar('\n');
	return (0);
}
