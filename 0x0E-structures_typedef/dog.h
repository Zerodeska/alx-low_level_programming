#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains dog's info
 *
 * @name: first element
 * @owner: second element
 * @age: third element
 *
 * Description: longer description
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
