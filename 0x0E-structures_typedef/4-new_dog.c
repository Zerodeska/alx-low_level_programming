#include "dog.h"

/**
 * new_dog - declares new elements
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_;

	new_->name = name;
	new_->age = age;
	new_->owner = owner;
	return (new_);
}
