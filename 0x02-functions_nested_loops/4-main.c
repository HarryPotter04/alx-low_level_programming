#include "main.h"

/**
 * main - check the code.
 * Return: Always 0.
 */

int main(void)
{
	int j;

	j = _isalpha('H');
	
	_putchar(j + '0');
	
	j = _isalpha('o');
	
	_putchar(j + '0');
	
	j = _isalpha(108);
	
	_putchar(j + '0');
	
	j = _isalpha(';');
	
	_putchar(j + '0');
	
	_putchar('\n');
	
	return (0);
}
