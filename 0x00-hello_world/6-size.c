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

	printf("Size of a char: %lu byt(s)\n", sizeof(c));
	printf("Size of an int: %lu byt(s)\n", sizeof(i));
	printf("Size of a long int: %lu byt(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byt(s)\n", sizeof(lli));
	printf("Size of a float: %lu byt(f)\n", sizeof(f));
	return (0);
}
