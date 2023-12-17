#include <stdio.h>

/**
 * main - starting poiint of program
 *
 * Return: 0 when executed
 */


int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (b + 10 * a < d + 10 * c)
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar(' ');
						putchar('0' + c);
						putchar('0' + d);
						if (10 * a + b == 98 && 10 * c + d == 99)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
