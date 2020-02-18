#include "holberton.h"
/**
  * puts2 - prints every other char of the func
  * @str: pointer
  * Return: nothing
  */

void puts2(char *str)
{
	if (str)
	{
		do
		{
		if (*str)
		{
			_putchar(*str++);
		}
		}
			while (*str++);
			_putchar('\n');
		}
}
