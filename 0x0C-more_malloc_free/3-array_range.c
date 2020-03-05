#include "holberton.h"
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: minimun
  * @max: maximun
  * Return: p
  */
int *array_range(int min, int max)
{
	int *p;
	int i;

		if (min > max)
			return (NULL);

		p = malloc(((max - min) + 1) * sizeof(int));

		if (p == NULL)
			return (NULL);
		for (i = 0; min <= max;)
		{
			p[i++] = min++;
		}
		return (p);
}
