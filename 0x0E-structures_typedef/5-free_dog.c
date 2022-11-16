#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @puppy: struct dog
 */

void free_dog(dog_t *puppy)
{
	if (puppy)
	{
		free(puppy->name);
		free(puppy->owner);
		free(puppy);
	}
}
