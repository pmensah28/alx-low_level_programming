#ifndef DOG
#define DOG

/**
 * struct dog - struct for dog info
 * @name: type char
 * @age: float type
 * @owner: char type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *puppy, char *name, float age, char *owner);
void print_dog(struct dog *puppy);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *puppy);

#endif /*DOG_H*/
