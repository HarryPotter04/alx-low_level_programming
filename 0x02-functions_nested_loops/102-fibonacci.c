#include <stdio.h>

/**
 * main - block to execute
 * Desciption: computes and prints
 * Return: 0
 */

int main(void)
{
	int j = 0;
	long int a = 0, b = 1, next;

	while (j < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (j < 49)
		{
			printf(", ");
		}
		j++;
	}
	putchar('\n');
	return (0);
}
