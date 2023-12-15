#include <stdio.h>

/**
 * main - starting point to program
 *
 * Return: always 0 when true
 */

int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (i = 10; i < 16; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
