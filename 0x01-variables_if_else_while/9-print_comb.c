#include <stdio.h>

/**
 * main - Entry of program
 *
 * Return: 0 when executed
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
