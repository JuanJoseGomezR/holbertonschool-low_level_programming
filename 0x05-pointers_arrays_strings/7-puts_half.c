#include "holberton.h"
/**
  * puts_half - puts half
  * @str: pointer
  * Return: nothing
  */

void puts_half(char *str)
{
int n;

	if (str)
	{

		for (n = 0; *(str + n); n++)
		;
			for (str += (n + 1) / 2; *str; str++)
				_putchar(*str);
			_putchar('\n');
	}
}

