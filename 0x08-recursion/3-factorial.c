#include "main.h"

/**
 * factorial - returns a factorial of passed number
 *
 * @n: passed number
 *
 * Return: the result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
