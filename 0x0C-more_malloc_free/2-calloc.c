#include "main.h"

/**
 * _calloc - works as well as calloc
 *
 * @nmemb: number of elements
 * @size: size of each elements
 *
 * Return: the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0  || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}