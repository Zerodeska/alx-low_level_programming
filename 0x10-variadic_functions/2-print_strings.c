#include "variadic_functions.h"

/**
 * print_strings - prints passed numbers
 * @separator: separator char
 * @n: number of numbers
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *x;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(a, char *);
		if (x == NULL)
			printf("(nil)");
		printf("%s", x);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
