#include "main.h"
int _test(int c, int v);

/**
 * is_prime_number - it will test the number
 *
 * @n: passed number
 *
 * Return: the result 0 or 1
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 1)
		return (0);
	x = _test(n, 2);
	return (x);
}
/**
 * _test - testing process
 *
 * @c: passed number
 * @v: used to test
 *
 * Return: 0 or 1
 */
int _test(int c, int v)
{
	if (c % v == 0 && c > v)
		return (0);
	if (v > c / 2)
		return (1);
	return (_test(c, v + 1));
}
