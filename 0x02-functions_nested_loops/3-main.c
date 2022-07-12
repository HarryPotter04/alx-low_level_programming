#include "main.h"

/**
 * main - check the code.
 * Return: Always 0.
 */

int main(void)
{
	int j;

	j = _islower('H');

	_putchar(j + '0');

	j = _islower('o');
	
	_putchar(j + '0');
	
	j = _islower(108);
	
	_putchar(j + '0');
	
	_putchar('\n');
	return (0);
}
