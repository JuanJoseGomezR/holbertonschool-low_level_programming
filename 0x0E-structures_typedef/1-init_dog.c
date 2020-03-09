#include "dog.h"
#include <stdio.h>
/**
  * init_dog - initializes the struct dog
  * @d: dog pointer
  * @name: name
  * @age: age
  * @owner: owner
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
