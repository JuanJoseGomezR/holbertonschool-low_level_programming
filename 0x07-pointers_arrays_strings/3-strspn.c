#include "holberton.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: pointer1
  * @accept: #include "holberton.h"
  * Return: s
  */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int count;

count = 0;

	for (i = 0; s[i] != '\0'; s++, i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				count++;
				break;
			}
		}
		if (count < i)
			break;
	}
	return (count);
}
