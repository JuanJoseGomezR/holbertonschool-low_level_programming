#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - prts the sum of the two diagonals of a sqre matrx of ints
  * @a: pointer
  * @size: size
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
int i;
int diagonal_sum_1 = 0;
int diagonal_sum_2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		diagonal_sum_1 += a[i];
	}
		for (i = (size - 1); i < ((size * size) - 1); i += (size - 1))
		{
			diagonal_sum_2 += a[i];
		}
		printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
