#include "main.h"

/**
 * _memcpy - copies string to another one
 *
 * @dest: the storage of copied string
 *
 * @src: the copied string
 *
 * @n: the number of elements to be copied
 *
 * Return: n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
