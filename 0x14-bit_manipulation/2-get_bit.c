#include "main.h"
/**
 * get_bit - it will give us the bit of passed index
 * @n: passed number
 * @index: passed index
 * Return: the index's bet
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x = 0;

	while (x < index)
	{
		n >>= 1;
		x++;
	}
	return (n & 1);
}
