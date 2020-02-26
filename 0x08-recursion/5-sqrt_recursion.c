#include "holberton.h"
/**
 * _pow_recursion - value raised to the power..
 * @x: var1
 * @y: var2
 * Return: value of x raised to the power of y
 */
int square(int c, int b)
{
	int sqr = (c * c);

	if (b == sqr)
	{
		return (c);
	}
	if ((sqr > b) || (b < 0))
	{
		return (-1);
	}
		return (square(c + 1, b));
}
/**
  * square - square
  * @i: var1
  * @b: var2
  * Return: square
  */
int _sqrt_recursion(int n)
{
	return (square(0, n));
}
