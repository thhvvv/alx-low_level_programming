#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates array of integers
 * @max: maximum number
 * @min: minimum number
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (min > max)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		array[i] = min++;
	return (array);
}
