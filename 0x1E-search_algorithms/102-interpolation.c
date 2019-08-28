#include "search_algos.h"

/**
 * helper - searches for value in a sorted array using interpolation search
 * @array: array
 * @low: starting index of array
 * @high: ending index of array
 * @value: value of the size
 * Return: index of value found
 */

int helper(int *array, size_t low, size_t high, int value)
{
	size_t position;

	while (low <= high && array[low] <= value && array[high] >= value)
	{
		position = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);
		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
	}
	return (-1);
}

/**
 * interpolation_search - searches sorted array, interpolation search
 * @array: array
 * @size: size of the array
 * @value: value of the size
 * Return: index of value found
 */

int interpolation_search(int *array, size_t size, int value)
{
	int answer;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	answer = helper(array, 0, size - 1, value);
	return (answer);
}
