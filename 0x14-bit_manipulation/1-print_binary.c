#include "main.h"

/**
 * print_binary - it prints binary digits
 * @n: passed number
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
