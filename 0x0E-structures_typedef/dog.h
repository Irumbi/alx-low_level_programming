#ifndef DOG_H
#define DOG_H

/**
 *struct dog - A struct that represents a dog.
 *@name: The dog's name as a string.
 *@age: The dog's age as a float.
 *@owner: The dog's owner as a string.
 *
 *This struct represents a dog
 * and includes fields for the dog's name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

