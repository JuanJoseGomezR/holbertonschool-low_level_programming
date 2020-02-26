#include "holberton.h"
/**
 * square - find the root square
 * @c: var1
 * @b: var2
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
  * _sqrt_recursion - square
  * @n: var1
  * Return: square
  */
int _sqrt_recursion(int n)
{
	return (square(0, n));
}
