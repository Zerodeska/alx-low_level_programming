#include "variadic_functions.h"

/**
 * print_numbers - prints passed numbers
 * @separator: separator char
 * @n: number of numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int x;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(a, int);
		printf("%d", x);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
