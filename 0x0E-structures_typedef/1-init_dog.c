#include "dog.h"
#include <stdio.h>


/**
 * init_dog - initialize a variable.
 * @d: details
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->owner = owner;
		d->name = name;
		d->age = age;
		
	}
}
