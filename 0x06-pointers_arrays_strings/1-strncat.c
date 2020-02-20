#include "holberton.h"
/**
  * _strncat - concatenate 2 strings
  * @dest: point1
  * @src: point2
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
int i;
	
	for (i = 0; *(dest + i); i++)
	{
	}
	for (n = 0; *(src + n); n++, i++)
	{
		*(dest + i) = *(src + n);
	}
	return (dest);
}
