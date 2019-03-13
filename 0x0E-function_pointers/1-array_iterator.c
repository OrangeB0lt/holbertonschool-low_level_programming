#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - runs through an array and gives each element of array
 * @size: size of the array
 * @array: the array
 * @action: what you want to do tot he numbers
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*iterator)(int);
	size_t counter;

	if (size == '0' || array == NULL || *action == NULL)
		exit(1);

	iterator = action;
	for (counter = 0; counter < size; counter++)
	{
		iterator(array[counter]);
	}
	if (*iterator == NULL)
		exit(1);
}
