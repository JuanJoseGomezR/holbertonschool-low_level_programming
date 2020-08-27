#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
  * binary_search - binary search algori
  * @array: array given
  * @size: size of array
  * @value: value to find
  *
  * Return: value || -1 if fails
  */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, count, tmp;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	for (count = 0; left <= right && count < size; count++)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		tmp = left;
		while (tmp <= right)
		{
			printf("%d", array[tmp]);
			if (tmp < right)
				printf(", ");
			tmp++;
		}
		printf("\n");

		if (array[middle] < value)
		{
			left = middle + 1;
			continue;
		}
		if (array[middle] > value)
		{
			right = middle - 1;
			continue;
		}
		if (array[middle] == value)
			return (middle);
	}
	return (-1);
}
