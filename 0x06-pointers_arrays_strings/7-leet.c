#include "main.h"

/**
 * leet - encoding a string with 1337 style
 *
 * @s: paassed string
 *
 * Return: the encoded string
 */


char *leet(char *s)
{
	int i = 0;
	char C[5] = {'A', 'E', 'L', 'O', 'T'};
	char c[5] = {'a', 'e', 'l', 'o', 't'};
	char N[5] = {'4', '3', '1', '0', '7'};

	while (s[i] != '\0')
	{
		int n = 0;

		while (n < 5)
		{
			if (s[i] == c[n] || s[i] == C[n])
			{
				s[i] = N[n];
			}
			n++;
		}
		i++;
	}
	return (s);
}

