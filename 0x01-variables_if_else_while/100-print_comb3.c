#include <stdio.h>

/**
 * main - starting point of program
 *
 * Return: 0 when executed
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (n > i)
			{
				putchar('0' + i);
				putchar('0' + n);
				if (i == 8 && n == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
