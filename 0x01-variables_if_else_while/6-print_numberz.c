#include <stdio.h>

/**
 * main - starting point
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
