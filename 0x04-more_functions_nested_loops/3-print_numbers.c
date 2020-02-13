#include "holberton.h"

/**
* print_numbers - print 0 - 9
* Return: nothing
*/
char c;

void print_numbers(void)
{
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
