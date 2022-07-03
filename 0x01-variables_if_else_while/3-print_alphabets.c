#include <stdio.h>

/**
 * main - prints out lowercase(a-z) alphabets, and uppercase(A-Z) alphabets,
 * followed by a new line \n
 * Return: Always 0 (Success)
 */

int main(void)

{
	int z;

	for (z = 'a'; z <= 'z'; z++)
	putchar(z);

	for (z = 'A'; z <= 'Z'; z++)
	putchar(z);

	putchar('\n');
	return (0);
}
