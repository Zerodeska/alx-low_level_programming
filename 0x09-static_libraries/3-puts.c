#include "main.h"

/**
 * _puts - it will print the passed string to it
 *
 * @str: is passed string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
