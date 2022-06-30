#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char acharacter;
	int aninteger;
	long along;
	long long alonglong;
	float afloat;

	printf(" The Size of a char: %lu byte(s) \n", sizeof(acharacter));
	printf(" The Size of a ïnt: %lu byte(s) \n", sizeof(aninteger));
	printf(" The Size of a long int: %lu byte(s) \n", sizeof(along));
	printf(" The Size of a long long int: %lu byte(s) \n", sizeof(alonglong));
	printf(" The Size of a float: %lu byte(s) \n", sizeof(afloat));

	return (0);
}
