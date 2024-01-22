#include "dog.h"

/**
 * init_dog - initialize dog's info
 *
 * @d: passed struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
