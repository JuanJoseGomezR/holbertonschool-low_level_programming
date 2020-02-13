#include "holberton.h"

/**
* print_square - prints "#"
* @size: size of the #
* Return: nothing
*/

void print_square(int size)
{
int column;
int row;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
