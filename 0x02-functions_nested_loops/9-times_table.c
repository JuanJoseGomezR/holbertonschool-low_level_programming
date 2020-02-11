#include "holberton.h"

/**
* times_table - table of 9
* Return: the value of last digit
*/

void times_table(void)
{
int i, j, op;

for (i = 0; i < 10; i++)
{
_putchar('0');
_putchar('.');
_putchar(' ');
for (j = 0; j < 10; j++)
{
op = (i * j);
if ((op / 10) > 0)
{
_putchar((op / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((op % 10) + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
