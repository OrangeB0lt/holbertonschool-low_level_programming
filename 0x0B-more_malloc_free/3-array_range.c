#include <stdlib.h>

/**
 * array_range - makes an array from min to max
 * @min: min number
 * @max: max number
 * Return: returns the pointer to the array, or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= man)
		arr[i++] = min++;
	return (arr);
}
