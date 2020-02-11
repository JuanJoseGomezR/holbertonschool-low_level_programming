#include "holberton.h"

/**
* print_last_digit - prints last digit of number
* @ld: number to print last digit of
*
* Return: the value of last digit
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
