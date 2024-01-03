#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of an array
 *
 * @a: the address of array
 *
 * @n: the number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
