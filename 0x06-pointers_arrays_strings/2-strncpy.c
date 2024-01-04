#include "main.h"

/**
 * _strncpy - function will deal with the string needed to be copied
 *
 * @dest: the var which will store the string
 *
 * @src: the char which will be copied
 *
 * @n: the number of copied elements
 *
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
