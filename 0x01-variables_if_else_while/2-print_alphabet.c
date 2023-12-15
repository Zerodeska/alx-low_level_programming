#include <stdio.h>

/*
 * main - the starting point of executing
 *
 * Return: 0 when executed
 */

int main(void)
{
	int i;
	char c = 'a';

	for (i = 1 ; i < 27 ; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
