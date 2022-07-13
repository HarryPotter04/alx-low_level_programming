#include "main.h"

/**
 * print_sign - entry point
 *
 * @n : number to check
 *
 * Return:0 or 1 or -1
 */

int print_sign(int n)
{
	int j;

	if (n > 0)
	{
		j = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		j = 0;
		_putchar('0');
	}
	else
	{
		j = -1;
		_putchar('-');
	}
	return (j);
}
