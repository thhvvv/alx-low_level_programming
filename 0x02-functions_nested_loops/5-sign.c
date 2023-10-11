#include "main.h"

/**
 * print_sign - checks if n is positive or negative
 *
 * @n: character to be checked
 *
 * Return: Return 1 if positive 0 is zero and -1 is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
	return (0);
}
