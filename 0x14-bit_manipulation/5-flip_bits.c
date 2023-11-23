#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number
 * @n: number
 * @m: number to flip to n
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int row = n ^ m, bit = 0;

	while (row > 0)
	{
		bit += (row & 1);
		row >>= 1;
	}
	return (bit);
}
