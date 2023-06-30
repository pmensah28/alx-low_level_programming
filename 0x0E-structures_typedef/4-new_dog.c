#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: pointer to a new dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenX, lenY;
	dog_t *puppy;

	puppy = (dog_t *)malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);
	lenX = lenY = 0;
	while (name[lenX++])
		;
	while (owner[lenY++])
		;

	puppy->name = malloc(lenX * sizeof(puppy->name));
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	for (i = 0; i <= lenX; i++)
		puppy->name[i] = name[i];
	puppy->age = age;
	puppy->owner = malloc(lenY * sizeof(puppy->owner));
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	for (i = 0; i <= lenY; i++)
		puppy->owner[i] = owner[i];
	return (puppy);
}
