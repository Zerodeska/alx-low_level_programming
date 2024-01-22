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
	struct dog *p = d;
	p -> name = name;
	p -> age = age;
	p -> owner = owner;
}
