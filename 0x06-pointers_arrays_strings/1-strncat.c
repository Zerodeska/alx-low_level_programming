#include "main.h"

/**
 * _strncat - it will concatenate two strings
 *
 * @dest: the first passed string
 *
 * @src: the second one
 *
 * @n: the number needed to pass
 *
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j <= n - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
