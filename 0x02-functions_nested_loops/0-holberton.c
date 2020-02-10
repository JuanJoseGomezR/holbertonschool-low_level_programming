#include "holberton.h"

/**
* main - prints alphabet
*Return: 0
*/

int main(void)
{
char *c = "Holberton";


while (*c)
{
_putchar(*c);
c++;
}
_putchar('\n');
return (0);
}
