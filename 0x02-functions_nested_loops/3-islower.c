#include "main.h"

/**
 * _islower - checks if the char is lowercase or not
 *
 * Return: 0 when lower , 1 if else
 *
 * @c: i char to be checked
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
