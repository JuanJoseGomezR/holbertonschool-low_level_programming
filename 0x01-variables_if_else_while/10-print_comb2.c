#include <stdio.h>
/**
* main - Outputs numbers from 00 to 99
* Return: 0
*/
int main(void)
{
int i;
int j;

for (i = 48; i < 59 ; i++)
{
for (j = 48; j < 59; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
return (0);
}
