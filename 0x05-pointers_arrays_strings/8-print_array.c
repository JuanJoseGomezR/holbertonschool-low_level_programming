#include "holberton.h"
/**
  * print_array - print some numbers from the array
  * @a: var
  * @n: pointer
  * Return: nothing
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
