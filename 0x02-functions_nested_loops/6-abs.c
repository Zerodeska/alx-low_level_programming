#include "main.h"

/**
 * _abs - makes the absolute value
 *
 * @c: passed parameter
 *
 * Return: -c when negative , c when psitive
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
