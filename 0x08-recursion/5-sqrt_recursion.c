#include "main.h"

/**
 * _sqrt_recursion - square root of n
 * @n: number to check
 * @i: iterate number
 * _sqrt - check natural sqrt
 *
 * Return: Always 0 success
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - check natural sqrt
 * @n: calculate square root
 * @i: iterate number
 *
 * Return: 0 if natural sqrt else -1
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
