#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: 0 Success
 */

void print_alphabet(void)

{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
