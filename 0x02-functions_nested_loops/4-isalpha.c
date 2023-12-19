#include "main.h"

/**
 * _isalpha - checks whether c is char or nor
 *
 * @c: is checked parameter
 *
 * Return: 1 when alpha , 0 else
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
