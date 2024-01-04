#include "main.h"

/**
 * _strcmp - compares two string together
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n = 0;

	while (s1[n] != '\0' || s2[n] != '\0')
	{
		i = s1[n] - s2[n];
		if (i != 0)
		{
			break;
		}
		n++;
	}
	return (i);
}
