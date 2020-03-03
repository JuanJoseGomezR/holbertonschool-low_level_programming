#include <stdlib.h>
#include "holberton.h"
/**
  * create_array - create an array of char
  * @size: size
  * @c: var
  * Return: type char
  */
char *create_array(unsigned int size, char c)
{
char *l;

	if (!size)
		return (NULL);

	l = malloc(sizeof(char) * size);

	if (!l)
		return (NULL);
	if (l)
	{
		while (size > 0)
			l[--size] = c;
	}
	return (l);
}
