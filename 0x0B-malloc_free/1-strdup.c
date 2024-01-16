#include "main.h"
#include <string.h>

/**
 * _strdup - it duplicates a string
 *
 * @str: passed string
 *
 * Return: the string
 */

char *_strdup(char *str)
{
	unsigned long int i = 0;
	char *p = malloc(strlen(str) + 1);

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	while (i < strlen(str))
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
