#include "main.h"

/**
 * array_range - makes an array of integers
 *
 * @min: minimum element of array
 * @max: maximum element of array
 *
 * Return: the array
 */

int *array_range(int min, int max)
{
	int num = max - min + 1, i = 0;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * num);
	if (p == NULL)
		return NULL;
	while (i < num)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
