#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: # of bits to use
 * Return: returns pointer to allocated mem
 **/

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		return(98);
	}
	return (pointer);
}
