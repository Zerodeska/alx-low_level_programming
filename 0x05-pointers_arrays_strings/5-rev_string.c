#include "main.h"

/**
 * rev_string - it reverse string without printing
 *
 * @s: passed string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[j] != 0)
	{
		j++;
	}
	j--;
	while (j > i)
	{
		char temp;

		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}


