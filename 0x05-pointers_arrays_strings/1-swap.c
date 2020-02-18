#include "holberton.h"
/**
 * swap_int - swaps the values
 * @a: var 1
 * @b: var 2
 * return: nothing
 */

void swap_int(int *a, int *b)
{
int var;

var = *a;
*a = *b;
*b = var;
}
