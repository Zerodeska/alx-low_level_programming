#include "main.h"

/**
 * binary_to_uint - converts from binary to decimal
 * @b: passed string
 * Return: decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1, i = 0;
	int X = 0;

	if (b == NULL)
		return (0);
	while (b[X] != '\0')
	{
		if (b[X] != '0' && b[X] != '1')
			return (0);
		X++;
	}
	X--;
	while (X >= 0)
	{
		i = i + (b[X] - '0') * power;
		/*printf("result for %s now = %u\n", b, i);*/
		power *= 2;
		X--;
	}
	return (i);
}
