#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * new_dog - create new struct
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;

	return (dog);
}
/**
 * _strdup - create a new same string from other
 * @str: the original string
 * Return: The new space of memory to the new string.
 */
char *_strdup(char *str)
{
	unsigned int j = 0, size;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;
	size = j + 1;
	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		s[j] = str[j];
	return (s);
}
