#include <stdio.h>

/**
* main - descrip
* Return: 0
*
*/

int main(void)
{
int i;

for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
else if ( i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
printf("%d", i);
printf("\n");
return (0);
}
}
