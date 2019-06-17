#include "sort.h"

/**
* bubble_sort - sort in bubble method
* @array: array to be sorted
* @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t idx, cnt;

	if (size < 1 || array == NULL)
		return;
	for (idx = 0; idx < size - 1; idx++)
	{
		for (cnt = 0; cnt < size - idx - 1; cnt++)
		{
			if (array[cnt] > array[cnt + 1])
			{
				Aswap(&array, cnt, cnt + 1);
				print_array(array, size);
			}
		}
	}
}

/**
 * Aswap - swaps positions in array
 * @arr: array of stuff
 * @idx_a: index a
 * @idx_b: index b
 */

void Aswap(int **arr, int idx_a, int idx_b)
{
	int storage;

	storage = (*arr)[idx_a];
	(*arr)[idx_a] = (*arr)[idx_b];
	(*arr)[idx_b] = storage;
}
