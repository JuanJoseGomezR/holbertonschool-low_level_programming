#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in a arr
 * @array: array given
 * @size: size of array
 * @value: value to find
 * 
 * Return: value location || -1 if fails
 */
 
 int linear_search(int *array, size_t size, int value)
 {
    size_t f;

    if (!array || !*array)
        return (-1);

    for (f = 0; f < size; f++)
    {
	    printf("Value checked array[%d] = [%d]\n", (int)f, array[f]);
	    if (array[f] == value)
	    {
		    return (f);
	    }
    }
    return (-1);
 }
