#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @puppy: pointer to struct dog to initialize
 * @name: name of dog
 * @age: age of
 * @owner: dog owner
 */

void init_dog(struct dog *puppy, char *name, float age, char *owner)
{
	if (puppy == NULL)
		puppy = malloc(sizeof(struct dog));
	puppy->name = name;
	puppy->age = age;
	puppy->owner = owner;
}
