#include "holberton.h"
/**
  * _strchr - locates a character in a string
  * @s: pointer1
  * @c: pointer2
  * Return: NULL
  */
char *_strchr(char *s, char c)
{
int i = 0;

	for (; s[i] != '\0'; s++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	if (s[i] == c)
	{
	return (s);
	}

	else
	{
	return (0);
	}
}
