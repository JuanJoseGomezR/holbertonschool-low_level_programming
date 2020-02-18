#include "holberton.h"

/**
  * rev_string - reverse the string
  * @s: variable
  * return: nothing
  */

void rev_string(char *s)
{
char *t = s;
	if (s)
	{
		while (*t)
		{
			t++;
		while (s < t--)
		{
			*s ^= *t;
			*t ^= *s;
			*s ^= *t;
		}
		}
	}
	_putchar('\n');
}
