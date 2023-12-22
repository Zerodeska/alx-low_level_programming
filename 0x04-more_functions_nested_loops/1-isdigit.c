#include "main.h"

/**
 * _isdigit - checks if is it digit or not
 *
 * @c: passed parameter
 *
 * Return: 1 when digit, 0 when else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
