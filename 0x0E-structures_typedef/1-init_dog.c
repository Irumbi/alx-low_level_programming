#ifndef DOG_H
#define DOG_H

/**
 *init_dog - initializes a variable of type struct dog.
 *@d: Pointer to struct dog to initialize.
 *@name: Pointer to a string representing name of a dog.
 *@age: float representing ag of a dog.
 *@owner: Pointer representing name of dog's owner.
 *
 *Return: void
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int int_strlen(char *s);

#endif
