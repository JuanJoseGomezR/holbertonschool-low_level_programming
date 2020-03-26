#include "holberton.h"
/**
  * get_bit - returns value of a bit
  * @n: number
  * @index: given index
  * Return: integer
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (index);
}
