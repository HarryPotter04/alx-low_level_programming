#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int j;

	j = _abs(-1);
	printf("%d\n", j);
	j = _abs(0);
	printf("%d\n", j);
	j = _abs(1);
	printf("%d\n", j);
	j = _abs(-98);
	printf("%d\n", j);
	return (0);
}
