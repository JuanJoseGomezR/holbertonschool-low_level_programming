#include "holberton.h"

/**
* more_numbers - print 0 - 14x10
* Return: nothing
*/

void more_numbers(void)
{
int a, d;

for (d = 0; d <= 9; d++)
{
for (a = 0; a < 15; a++)
{
if (a > 9)
{
_putchar((a / 10) + '0');
}
_putchar((a % 10) + '0');
}
_putchar('\n');
}
}
