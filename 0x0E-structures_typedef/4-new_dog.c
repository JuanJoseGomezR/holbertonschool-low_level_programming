#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: value is i
*/
int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
/**
* _strcpy - string copy
* @dest: var
* @src: var
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
/**
  * new_dog - creates a new dog
  * @name: cpy name
  * @age: age of the dog
  * @owner: cpy owner
  * Return: nothing
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name2;
	char *owner2;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	name2 = malloc(sizeof(char) * _strlen(name) + 1);
	if (name2 == NULL)
	{
		free(dog);
		return (NULL);
	}
	owner2 = malloc(sizeof(char) * _strlen(owner) + 1);
	if (owner2 == NULL)
	{
		free(name2);
		free(dog);
		return (NULL);
	}
	_strcpy(name2, name);
	_strcpy(owner2, owner);
	dog->name = name2;
	dog->age = age;
	dog->owner = owner2;
	return (dog);
}
