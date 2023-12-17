#include <stdio.h>

/**
 * main - starting point of programming
 *
 * Return: 0 when executed
 */

int main(void)
{
	int i, n, m;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			for (m = 0; m < 10; m++)
			{
				if (i < n && n < m)
				{
					putchar('0' + i);
					putchar('0' + n);
					putchar('0' + m);
					if (i == 7 && n == 8 && m == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
