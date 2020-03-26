#include "holberton.h"
/**
  * flip_bits - flips
  * @n: number
  * @m: needed
  * Return: uns int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;
	int index = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int num = n ^ m;

	for (count = 0; index >= 0; index--)
	{
		if (((num >> index) & 1) == 1)
		{
			count += 1;
		}
	}
	return (count);
}
