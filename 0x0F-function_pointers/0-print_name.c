#include "function_pointers.h"

/**
 * print_name - it prints name as needed due to passed function
 *
 * @name: passed name to pass
 * @f: passed function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
