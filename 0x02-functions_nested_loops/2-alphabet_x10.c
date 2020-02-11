#include <stdio.h>
#include "holberton.h"

/**
*print_alphabet_x10 - alphax10
*
*Return: 0;
*/

void print_alphabet_x10(void)
{
int j, i;

j = 'a';
for (i = 0; i < 10; i++)
{
while (j <= 'z')
{
_putchar(j);
j++;
}
_putchar('\n');
j = 'a';
}
}
