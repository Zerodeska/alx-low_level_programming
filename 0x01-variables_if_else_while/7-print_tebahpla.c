#include <stdio.h>

/**
 * main - starting point of program
 *
 * Return: always 0 when succeed
 */

int main(void)
{
	int i;
	char c = 'z';

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
