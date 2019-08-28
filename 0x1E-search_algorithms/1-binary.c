#include "search_algos.h"

/**
 * helper - helper for the binary search function
 * @array: array to do the search
 * @start: start of the index
 * @end: end of the index
 * @value: value to search for
 * Return: index to search
 */

int helper(int *array, size_t start, size_t end, int value)
{
	size_t mid, index;

	while (start <= end)
	{
		printf("Searching in array:");
		for (index = start; index < end; index++)
			printf(" %d,", array[index]);
		printf(" %d\n", array[index]);
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid;
	}
	return (-1);
}

/**
 * binary_search - uses binary search algo to go through an array
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 * Return: returns index where array is found
 */

int binary_search(int *array, size_t size, int value)
{
	int answer;

	if (array == NULL)
		return (-1);
	answer = helper(array, 0, size - 1, value);
	return (answer);
}
