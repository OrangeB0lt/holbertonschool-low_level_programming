#include "sort.h"
/**
 * quick_sort - calls function to quick sort
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quikSort(array, size, 0, size - 1);
}
/**
 * quikSort - sort array using recursion
 * @array: array to be sorted
 * @size: size of array
 * @begin: beginning of array
 * @end: end of array
 */
void quikSort(int *array, size_t size, int begin, int end)
{
	int storage;

	if (end <= begin)
		return;
	storage = parti(array, size, begin, end);
	quikSort(array, size, begin, storage - 1);
	quikSort(array, size, storage, end);
}
/**
 * parti - partitions array
 * @array: array to partition
 * @size: size of array
 * @begin: beginning of array
 * @turn: pivot point
 * Return: returns new place to turn from
 */
int parti(int *array, size_t size, int begin, int turn)
{
	int first, second, third;

	first = array[turn];
	second = begin - 1;
	third = turn + 1;

	while (1)
	{
		do third--;
		while (array[third] > first);
		do second++;
		while (array[second] < first);

		if (second >= third)
			return (second);
		Bswap(array, size, second, third);
	}
}
/**
 * Bswap - swaps two eles in array
 * @array: array to swap
 * @size: size of array
 * @second: swaps with third
 * @third: swaps with second
 */
void Bswap(int *array, size_t size, int second, int third)
{
	int storage;

	if (array == NULL)
		return;
	storage = array[second];
	array[second] = array[third];
	array[third] = storage;
	if (array[second] != array[third])
		print_array(array, size);
}
