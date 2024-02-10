#include "main.h"
/**
 * clear_bit - it sets index's bet into 1
 * @n: passed number
 * @index: passed index
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long power = 1UL << index;

	if (index > 63)
		return (-1);
	~power;
	*n &= power;
	return (1);
}
