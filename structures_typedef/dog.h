#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Structure representing a dog with name, age, and owner.
 * @name: Pointer to a string representing the name of the dog.
 * @age: Float representing the age of the dog.
 * @owner: Pointer to a string representing the owner of the dog.
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
