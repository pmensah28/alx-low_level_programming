#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a dog struct
 * @puppy: struct dog
 */

void print_dog(struct dog *puppy)
{
	if (puppy == NULL)
		;
	else
	{
		if (puppy->name != NULL)
			printf("Name: %s\n", puppy->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", puppy->age);

		if (puppy->owner != NULL)
			printf("Owner: %s\n", puppy->owner);
		else
			printf("Owner: (nil)\n");
	}
}
