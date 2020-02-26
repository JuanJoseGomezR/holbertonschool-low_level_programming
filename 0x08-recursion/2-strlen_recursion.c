#include "holberton.h"
/**
  * _strlen_recursion - length of a string
  * @s: pointer
  * Return: length of a string
  */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
