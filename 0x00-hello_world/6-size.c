#include <stdio.h>

/**
 * main - the starting point of program
 *
 * Return: always 0 when succeed
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byt(s)\n", sizeof(c));
	printf("Size of an int: %ld byt(s)\n", sizeof(i));
	printf("Size of a long int: %ld byt(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byt(s)\n", sizeof(lli));
	printf("Size of a float: %ld byt(f)\n", sizeof(c));
	return (0);
}
