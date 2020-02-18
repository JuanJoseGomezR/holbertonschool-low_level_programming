#include "holberton.h"
/**
  * print_rev - print in reverse
  * @s: variable
  * return: nothing
  */

void print_rev(char *s)
{
char *t = s;
	if (s)
	{
	while (*t)
	{
		t++;
	}
	while (s < t--)
	{
		_putchar(*t);
	}
	_putchar('\n');
	}
}
