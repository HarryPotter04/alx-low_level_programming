#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program that prints all the numbers of base 16 in lowercase
 * Return: 0 Always
 */

int main(void)
{

	char z;

	for (z = '0'; z <= '9'; z++)
	{
	putchar(z);
	}

	for (z = 'a'; z <= 'f'; z++)
	{
	putchar(z);
	}

	putchar('\n');
	return (0);
}
