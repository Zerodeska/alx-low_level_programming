#include "main.h"

/**
 * string_nconcat - concatenates two stirngs
 *
 * @s1: first passed string
 * @s2: second passed string
 *
 * Return: the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned long int i = 0;
	unsigned int j = 0;

	p = malloc(strlen(s1) + n + 1);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (i < strlen(s1))
	{
		p[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
