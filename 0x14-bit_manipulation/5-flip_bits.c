#include "main.h"
/**
 * flip_bits - it counts the number of fliped bits
 * @n: first number
 * @m: second number
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			number++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (number);
}
