#include "main.h"

/**
 * puts2 - it prints half of string
 *
 * @str: is passed function
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 != 0)
		{
			_putchar(str[i]);
		}
	}
}
