#include "main.h"

/*
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char j;

	int i = 0;
	
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
