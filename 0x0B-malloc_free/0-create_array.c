#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initialize
 * @size: size of memory
 * @c: array
 *
 * Return: 0 on failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);
	if (p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
