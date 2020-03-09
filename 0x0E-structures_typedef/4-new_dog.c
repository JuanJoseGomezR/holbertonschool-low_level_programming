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

	for (i = 0; i <= _strlen(src); i++)
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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);
	return (dog);
}
