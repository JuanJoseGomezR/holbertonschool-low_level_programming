#include "holberton.h"
/**
  * _strncat - concatenate 2 strings
  * @dest: point1
  * @src: point2
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
j = 0;
	
	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (;j < n && *(src + j) != '\0'; i++, j++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}
