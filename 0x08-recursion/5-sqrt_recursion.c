#include "main.h"
int _test(int c, int v);
/**
 * _sqrt_recursion - returns the sqrt
 *
 * @n: passed number
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
		return (-1);
	x = _test(n, 0);
	return (x);

}
/**
 * _test - determines the sqr
 *
 * @c: the passed argument
 *
 * @v: tested number
 *
 * Return: the value
 */
int _test(int c, int v)
{
	if (v * v == c)
		return (v);
	else if (v * v != c && v < c)
		return (_test(c, v + 1));
	else
		return (-1);
}
