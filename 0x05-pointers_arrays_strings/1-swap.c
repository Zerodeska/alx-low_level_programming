#include "main.h"

/**
 * swap_int - swaps the values
 *
 * @a: first passed parameter
 *
 * @b: second passed parameter
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
