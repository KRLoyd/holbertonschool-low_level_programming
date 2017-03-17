#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize struct dog
 * @d: struct dog to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
