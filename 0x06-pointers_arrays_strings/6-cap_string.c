#include "main.h"

/**
 * cap_string - capitalize first char in the word
 *
 * @s: passed string
 *
 * Return: the modified string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	i++;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == '.'
		|| s[i] == ';' || s[i] == '?' || s[i] == '!' || s[i] == '"' || s[i]  == '('
		|| s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	i++;
	}
	return (s);
}
