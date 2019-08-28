#include "holberton.h"

/**
 * linear_search - linear search algo
 * @array: array to search through
 * @size: size of array
 * @value: value(s) to search for
 * Return: first index when value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
