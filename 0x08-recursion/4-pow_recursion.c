#include "main.h"

/**
 * _pow_recursion - power of a number
 * @x: number to be computed
 * @y: power to be raised to number
 *
 * Return: 0 on success else -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
