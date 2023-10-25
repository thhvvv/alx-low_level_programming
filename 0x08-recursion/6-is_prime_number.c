#include "main.h"

/**
 * is_prime_number - checks prime no
 * @n: number
 * @i: iteration times
 *
 * Return: Always 0 success else 1
 */

int _prime(int n, int i);
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - checks prime numbers
 * @n: number to be checked
 * @i: iteration times
 *
 * Return: 1 if prime else 0
 */
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (_prime(n, i + 1));
}
