#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc, *clone;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);
	for (i = 0; i < old_size || i < new_size; i++)
	{
		*(realloc + i) = clone[i];
	}
	free(ptr);

	return (realloc);
}
