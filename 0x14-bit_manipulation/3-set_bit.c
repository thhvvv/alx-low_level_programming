#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit: sets the value of a bit to 1 at given index
 * @n: number to set bit
 * @index: index at which the bit is set
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
