#include "main.h"

/**
 * _strlen - pass size of string
 *
 * @s: passed string
 *
 * Return: always size of string
 */

int _strlen(char *s)
{
	int _size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_size = sizeof(s[i]) * (i + 1);
	}
	return (_size);
}
