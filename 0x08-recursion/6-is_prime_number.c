#include "holberton.h"
/**
  * primes - Prime numbers
  * @i: var
  * @j: var2
  * Return: 1 || 0
  */
int primes(int i, int j)
{
	if ((i == 1) || (i < 0) ) 
	{
		return (0);
	}
	if (i == j)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return primes(i, j + 1);
}
/**
* is_prime_numbers - square
* @n: var1
* Return: if primes
*/
int is_prime_number(int n)
{
	return (primes(n, 2));
}
