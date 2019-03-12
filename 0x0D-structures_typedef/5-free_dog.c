#include <stdio.h>
#include <stdlib>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: dog to be freed
 **/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
