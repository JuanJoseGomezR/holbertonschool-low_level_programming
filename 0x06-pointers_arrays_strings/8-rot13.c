#include "holberton.h"
/**
  * rot13 - encodes a string
  * @s: point
  * Return: s
  */

char *rot13(char *s)
{
int i, j;
char array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (array[j] == s[i])
			{
				s[i] = arr[j];
			}
		}
	}
	return (s);
}
