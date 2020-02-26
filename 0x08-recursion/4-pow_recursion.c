#include "holberton.h"
/**
  * _pow_recursion - value raised to the power..
  * @x: var1
  * @y: var2
  * Return: value of x raised to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
