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
char test;

	for (i = 0; s[i] != 0; i++)
	{
		test = 0;
		for (j = 0; j <= 51 && test == 0; j++)
		{
			if (array[j] == s[i])
			{
				s[i] = arr[j];
				test = 1;
			}
		}
	}
	return (s);
}
