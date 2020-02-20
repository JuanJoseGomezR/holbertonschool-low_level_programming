#include "holberton.h"
/**
  * _strcat - concatenate 2 strings
  * @dest: point1
  * @src: point2
  * Return: pointer to dest
  */

char *_strcat(char *dest, char *src)
{
int i, j;

	for (i = 0; *(dest + i); i++)
	{
	}
	for (j = 0; *(src + j); j++, i++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}
