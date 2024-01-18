#include "main.h"

/**
 * malloc_checked - it allocates a memory for a pointer
 *
 * @b: size of var
 * Return: pointer allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
