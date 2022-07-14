#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block to be executed
 * Description: computes and prints
 * Return: 0
 */

int main(void)
{
	int j = 0;
	int sum = 0;

	while (j < 1024)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			sum += j;
		}
		j++;
	}
	printf("%i\n", sum);
	return (0);
}
