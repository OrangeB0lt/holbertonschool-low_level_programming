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

	iterator = action;
	for (i = 0; 1 < ize; i++)
	{
		iterator(array[i]);
	}
}
