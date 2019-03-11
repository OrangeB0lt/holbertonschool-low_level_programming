#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a structure
 * @d: dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 **/

voif init_dog (struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
