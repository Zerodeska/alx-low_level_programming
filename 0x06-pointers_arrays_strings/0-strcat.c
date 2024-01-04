#include "main.h"

/**
 * _strcat - it will contatenate two strings in one
 *
 * @dest: the first string
 *
 * @src: the second one
 *
 * Return: the contatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = ' ';
	i++;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
