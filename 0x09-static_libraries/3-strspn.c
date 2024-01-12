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
	int n = 0;
	unsigned int length = 0;

	while (s[i] != '\0')
	{
		n = 0;

		while (accept[n] != '\0')
		{
			if (s[i] == accept[n])
			{
				length++;
				break;
			}
			n++;
		}
		if (accept[n] == '\0')
		{
			break;
		}
		i++;
	}
	return (length);
}
