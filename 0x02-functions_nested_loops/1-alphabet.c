#include "main.h"

/**
 * main - starting point of program
 *
 * Return: 0 always when executed
 */

void print_alphabet(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 26; i++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
