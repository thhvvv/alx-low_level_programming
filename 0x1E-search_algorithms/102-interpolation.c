#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers using interpolation research
 * @array: pointer to the first element of the array to serach
 * @size: the number of elements in the array
 * @value: the value to serach for
 * Return: if the value is not present or array is NULL, -1 , else the first index where the value is located
 * Description: prints the value everytime it is compared in the array
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
