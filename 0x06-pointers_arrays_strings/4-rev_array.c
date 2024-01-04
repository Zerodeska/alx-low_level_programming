#include "main.h"

/**
 * reverse_array - it will reverse the element of each passed array
 *
 * @a: passed array
 *
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	n--;
	while (i < n)
	{
		int temp;

		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
