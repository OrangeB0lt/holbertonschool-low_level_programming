#include "sort.h"
/**
 * merge_sort - sorts array using merge sort
 * @array: array to sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *covfefe;

	if (array && size > 1)
	{
		covfefe = malloc(sizeof(int *) * size);
		_sort(0, size - 1, covfefe, array);
		free(covfefe);
	}

}
/**
 * _sort - divides array in half, until size 1
 * @begin: start of cut array
 * @end: end of array
 * @covfefe: copy of original array
 * @array: original array
 */
void _sort(int begin, int end, int *covfefe, int *array)
{
	int s;

	if (begin < end)
	{
		s = (begin + end) / 2;
		if ((end + begin) % 2 == 0)
			s--;
		_sort(begin, s, covfefe, array);
		_sort(s + 1, end, covfefe, array);
		merge(begin, end, covfefe, array);
	}
}
/**
 * merge - merges arrays into one
 * @begin: start of cut array
 * @end: end of array
 * @covfefe: copy of original array
 * @array: original array
 */
void merge(int begin, int end, int *covfefe, int *array)
{
	int a, d, s, storage, storeSize;

	storeSize = end - begin + 1;
	s = ((begin + end) / 2);
	if ((begin + end) % 2 == 1)
		s++;

	/* printing stuff */
	printf("Merging...\n");
	a = begin;
	printf("[left]: ");
	print_array(array + a, (size_t)(s - a));
	d = s;
	printf("[right]: ");
	print_array(array + d, (size_t)((end - s) + 1));

	storage = 0;
	while (a < s && d <= end)
	{
		if (array[a] < array[d])
			covfefe[storage++] = array[a++];
		else
			covfefe[storage] = array[d++];
	}
	while (a < s)
		covfefe[storage++] = array[a++];
	while (d <= end)
		covfefe[storage++] = array[d++];

	storage = 0;
	a = begin;
	while (storage < storeSize)
		array[a++] = covfefe[storage++];

	printf("[Done]: ");
	print_array(array + begin, storeSize);
}
