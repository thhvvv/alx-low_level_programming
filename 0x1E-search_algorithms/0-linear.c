#include "search_algos.h"
/**
 * linear_search - searches for a value in the array of integers using linear search
 * @array: pointer to first element of the arra y to search
 * @size: number of elements in array
 * @value: value to serach for
 *
 * Return: If value not present or if array is NULL; -1 else, the first index where the value is located
 *
 * Description: prints a value every time compared in the arry.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
