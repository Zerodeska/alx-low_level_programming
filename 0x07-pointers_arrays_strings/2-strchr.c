#include "main.h"

/**
 * _strchr - copies char from specific char
 *
 * @s: passed string
 *
 * @c: passed letter to print from
 *
 * Retrun: f
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
