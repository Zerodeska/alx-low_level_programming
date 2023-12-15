#include <stdio.h>

/**
 * main - the starting point of executing
 *
 * Return: 0 when executed
 */

int main(void)
{
	int i;
	char c = 'a';
	char C = 'A';

	for (i = 1 ; i < 27 ; i++)
	{
		putchar(c);
		c++;
	}
	for (i = 1 ; i < 27 ; i++)
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
