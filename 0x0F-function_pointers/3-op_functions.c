#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
