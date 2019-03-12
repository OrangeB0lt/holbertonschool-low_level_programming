#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *
 *
 *
 *
 **/

dog_ t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_doggo;

	new_dog = malloc(sizeof(stuct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_doggo->name = name;
	new_doggo->age = age;
	new_doggo->owner = owner;
	return (new_doggo);
}
