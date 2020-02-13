#include "holberton.h"

/**
* print_square - prints "#"
* @size: size of the #
* Return: nothing
*/

void print_triangle(int size)
{
int row, column;

if (size < 0)
{
_putchar('\n');
}
else
{
for (row = 1 ; row <= size; row++)
{
for (column = 1; column <= size; column++)
{
if (column != size && column <= size - row)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
