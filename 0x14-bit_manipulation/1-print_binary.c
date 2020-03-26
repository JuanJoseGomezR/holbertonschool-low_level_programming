#include "holberton.h"
/**
  * print_binary - show binary format
  * @n: number
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int store;

	store = n;
	while (store > 0)
	{
		store >>= 1;
		count++;
	}
	if (count != 0)
		count--;
	while (count >= 0)
	{
		if ((n >> count) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		count--;
	}
}
