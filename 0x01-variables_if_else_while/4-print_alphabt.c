#include <stdio.h>

/**
 * main - prints the alphabet in lowercase followed by a new line.
 *
 * print all alphabets except q and e
 *
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char z = 'a';

	while (z <= 'z')
	{
	if (z != 'e' && z != 'q')
	{
	putchar(z);
	}
		z++;
	}
	putchar('\n');
	return (0);
}
