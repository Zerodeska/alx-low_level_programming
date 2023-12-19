#include "main.h"

/**
 * main - starting point of program
 *
 * Return: 0 always when executed
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet ();
	return (0);
}

void print_alphabet(void)
{
	char c = 'a';
	int i;
	for (i = 0; i < 26; i++)
	{
		_putchar(c);
		c++;
	}
	_putchar ('\n');
}

