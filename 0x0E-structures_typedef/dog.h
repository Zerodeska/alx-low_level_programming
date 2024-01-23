#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

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
void print_dog(struct dog *d);

typedef struct dog dog_t

dog_t *new_dog(char *name, float age, char *owner);

#endif
