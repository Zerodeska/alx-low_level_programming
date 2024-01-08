#include "main.h"

/**
 * _strspn - compare two strings and when will they accept together
 *
 * @s: passed string
 *
 * @accept: compared string
 *
 * Return: when they accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == accept[0])
		{
			return (i + 1);
		}
		i++;
	}
	return ('\0');
}
