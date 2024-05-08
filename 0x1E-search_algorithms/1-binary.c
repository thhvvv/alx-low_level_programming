#include "search_algos.h"

/**
 * binary_search - Searches for a value in the sorted array of integers using binary search
 * @array: pointer to first element of array to search
 * @size: number of elements in the array
 * @value: the value to serach for
 *
 * Return: If the value is not present or if array is NULL; -1 else, the index where the value is lovated
 * Description: prints the sub-array/array being searched after change
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
