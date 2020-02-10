#include "holberton.h"

/**
* print-last-digit - Description
* @ld: input
* Return: Always 0.
*/

int print_last_digit(int ld)
{
int a;
a = (ld % 10);
if (a < 0)
{
a = (-1 * a);
}
_putchar (a + '0');
return (a);
}
