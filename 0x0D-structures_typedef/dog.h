#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * goodboy - function to define a dog
 * @dg: structure
 * @name: name of the goodboy
 * @age: float age of the goodboy
 * @master: dog's owner
 **/

void goodboy(struct dog *dg, char *name, float age, char *master)
{
	if dg == NULL
		 {
		 }
	else
	{
		dg->name = name;
		dg->age = age;
		dg->master = master;
	}
}
