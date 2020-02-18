#include "holberton.h"
/**
  * _strlen - leng
  * @s: var
  * return: nothing
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
