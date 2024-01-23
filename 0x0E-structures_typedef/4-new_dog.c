#include "dog.h"
#include <string.h>

/**
 * new_dog - declares new elements
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the made struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = malloc(strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->owner);
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);
	strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
