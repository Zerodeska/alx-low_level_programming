#include "main.h"

/**
 * _memset - it fills memory with one byte
 *
 * @s: passed string
 *
 * @b: passed byte
 *
 * @n: number of elements to change
 *
 * Return: the modified string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
