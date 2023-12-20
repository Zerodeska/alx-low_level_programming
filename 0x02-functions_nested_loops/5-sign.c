#include "main.h"

/**
 * print_sign - checks the sign of int.
 *
 * @n: is passed parameter
 *
 * Return: 1 when + , -1 when - , 0 when 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (2);
	}
}
