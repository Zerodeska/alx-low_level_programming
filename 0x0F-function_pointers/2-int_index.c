#include "function_pointers.h"

/**
 * int_index - checks the integer index
 *
 * @array: passed array
 * @size: size of array
 * @cmp: passed function
 *
 * Return: -1 if not found , else if found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
