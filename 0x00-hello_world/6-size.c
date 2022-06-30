#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long int);
	int longlongSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf(" The Size of a char: %d byte(s) \n", charSize);
	printf(" The Size of a ïnt: %d byte(s) \n", intSize);
	printf(" The Size of a long int: %d byte(s) \n", longSize);
	printf(" The Size of a long long int: %d byte(s) \n", longlongSize);
	printf(" The Size of a float: %d byte(s) \n", floatSize);
	return (0);
}
