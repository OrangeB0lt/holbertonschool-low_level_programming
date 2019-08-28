#include "search_algos.h"

/**
 * minimum - returns the minimum
 * @num1: number 1
 * @num2: number 2
 * Return: returns minimum
 */

size_t minimum(size_t num1, size_t num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

/**
 * helper - searches for a value using the jump search algo
 * @array: array
 * @start: start of the array to search
 * @end: end of the array to search
 * @value: value
 * Return: index where value is found or -1
 */

int helper(int *array, size_t start, size_t end, int value)
{
	size_t index, prev, jump;

	if (end < start)
		return (-1);
	prev = 0;
	jump = sqrt(end - start);

	while (array[jump] < value && jump < end)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = jump;
		jump += sqrt(end - start);
		if (prev > (end - start))
			return (-1);

	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%ld] and [%ld]\n",
		   prev, jump);
	for (index = prev; index <= min(jump, end); index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}

/**
 * jump_search - searches for value in a sorted array using jump sort algo
 * @array: array
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not
 */

int jump_search(int *array, size_t size, int value)
{
	int answer;

	if (array == NULL)
		return (-1);
	answer = helper(array, 0, size - 1, value);
	return (answer);
}
