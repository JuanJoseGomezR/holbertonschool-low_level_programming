#include "holberton.h"
/**
  * set_bit - sets the value of a bit to 1
  * @n: number
  * @index: given index
  * Return: integer
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sett = 1;

	sett <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) | sett;
	return (1);
}
