#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: 0
 */

void print_numbers(void)
{
	char j = 0;

	while (j <= 9)
	{
		_putchar('0' + j);
		j++;
	}
	_putchar('\n');
}
