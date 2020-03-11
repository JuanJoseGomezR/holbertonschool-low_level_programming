#include "function_pointers.h"
/**
  * array_iterator - executes a function given as a parameter
  * @array: array
  * @size: size of array
  * @action: funct point
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((action == NULL) || (array == NULL))
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
