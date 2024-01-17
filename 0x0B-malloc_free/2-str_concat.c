#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: made string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned long int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(strlen(s1) + strlen(s2) + 1);
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
	while (j < strlen(s2))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
