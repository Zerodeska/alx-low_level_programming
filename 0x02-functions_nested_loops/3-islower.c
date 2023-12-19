#include "main.h"

/**
 * _islower - cheaks if the char is lowercase or not
 *
 * Return: 0 whaen lower 1 if else
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
