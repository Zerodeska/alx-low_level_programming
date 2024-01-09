#include "main.h"

/**
 * _strpbrk - it is same aas opp of strspn
 *
 * @s: passed string
 *
 * @accept: other passed one
 *
 * Return: the string required
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int pos = 0;

	while (s[i] != '\0')
	{
		int n = 0;

		while (accept[n] != '\0')
		{
			if (s[i] == accept[n])
			{
				pos++;
				break ;
			}
			n++;
		}
		if (s[i] == accept[n])
		{
			break;
		}
		i++;
	}
	return (s + i);
}

