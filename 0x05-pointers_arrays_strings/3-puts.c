#include "holberton.h"

/**
  * _puts - e
  * @str: var
  * Return: nothing
  */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
