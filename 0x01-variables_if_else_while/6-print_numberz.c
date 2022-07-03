#include <stdio.h>

/**
 * main - main block
 * prints all single digit numbers of base 10,
 * starting from 0,then followed by a new line.
 * Return: 0 Always
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
	putchar(40 + num);
	num++;
	}

	putchar('\n');
	return (0);
}
