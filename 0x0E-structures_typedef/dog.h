#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
  * struct dog - structure for dog
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: owner of the dog
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
char *_strdup(char *str);
#endif
