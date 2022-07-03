#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * prints all alphabets from z-a in lower case,
 * followed by a new line.
 * Return: 0 Always
 */

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');
	return (0);
}
