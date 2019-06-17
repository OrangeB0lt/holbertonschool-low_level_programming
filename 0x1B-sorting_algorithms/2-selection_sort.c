#include "sort.h"

/**
 * selection_sort - sorts array by selection sort algo
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int idx, count, storage, swp;

	for (idx = 0; idx < (size - 1); idx++)
	{
		swp = idx;
		for (count  = (idx + 1); count < size; count++)
		{
			if (array[count] < array[idx] && array[count] < array[swp])
			{
				swp = count;
			}
		}
		if (swp != idx)
		{
			storage = array[idx];
			array[idx] = array[swp];
			array[swp] = storage;
			print_array(array, size);
		}
	}
}
