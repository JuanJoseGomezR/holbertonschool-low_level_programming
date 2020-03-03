#include "holberton.h"
#include <stdlib.h>
/**
  * _strdup - pointer to a newly alloc space in mem
  * @str: var
  * Return: char type
  */
char *_strdup(char *str)
{
int i, j;
char *p;
i = 0;

	if (str == NULL)
		return (NULL);

	for (; str[i] != '\0';)
	{
		 i++;
	}

	p = malloc(sizeof(char) * i);

	if (p == NULL)
		return (NULL);
	for (j = 0; j < i;)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
