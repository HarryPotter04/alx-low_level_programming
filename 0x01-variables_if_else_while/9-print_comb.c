#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program that prints all possible combinations of single-digit numbers.
 * Return: 0 Success
 */

int main(void)
{
	int z;

	for (z = 48; z < 58; z++)
	{
	putchar(z);
	if (z != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
