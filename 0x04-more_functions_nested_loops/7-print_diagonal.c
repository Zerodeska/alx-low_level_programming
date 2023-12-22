#include "main.h"

/**
 * print_diagonal - prints diagonal
 *
 * @n: passed parameter
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
