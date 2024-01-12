#include "main.h"

/**
 * _strcpy - copies the elements of an array
 *
 * @dest: memory of copied array
 *
 * @src: array which will be copied
 *
 * Return: will be the dest array
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
