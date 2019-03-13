#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for ints
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to function used to compare values
 * Return: returns the index of the first element in which cmp function
 * does not return 0, if no element return -1, size less than 0 return -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*search)(int);
	int i, value;


	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	search = cmp;
	for (i = 0; i < size; i++)
	{
		value = search(array[i]);
		if (value != 0)
		{
			return (i);
		}
	}
	return (-1);
}
