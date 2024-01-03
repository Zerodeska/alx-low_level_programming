#include "main.h"

/**
 * puts_half - it prints half of string
 *
 * @str: passed string
 */

void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= (j / 2))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
