#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness: checks if a machine is little or big endian
 * Return: 1 for little, 0 for big
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
