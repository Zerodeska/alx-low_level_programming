#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: passed parameter
 *
 * Return: the value of s
 */

int print_last_digit(int n)
{
	int s;

	s = n % 10;
	_putchar('0' + s);
	return (s);
}
