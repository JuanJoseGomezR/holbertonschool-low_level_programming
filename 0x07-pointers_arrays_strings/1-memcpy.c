#include "holberton.h"
/**
  * _memcpy - copies memory area
  * @dest: pointer
  * @src: pointer2
  * @n: var
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
