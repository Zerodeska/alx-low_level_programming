#include "main.h"

/**
 * _isupper - compair if lowercase or not
 *
 * Return: 1 when upper ,0 when lower
 *
 * @c: passed char
 */



int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
