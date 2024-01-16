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
	char *p = malloc(strlen(str));

	if (str == NULL)
		return (NULL);
	while (i < strlen(str))
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
