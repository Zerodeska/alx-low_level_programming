#include "main.h"

/**
 * _strstr - compares where string is equal
 *
 * @haystack: passed string
 *
 * @needle: other passed one
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, n = 0;

	if (*needle == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[n] && needle[n] != '\0')
		{
			i++;
			n++;
		}
		if (needle[n] == '\0')
			return (haystack + i - n);
		i++;
		n = 0;
	}
	return ('\0');
}
