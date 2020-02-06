#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - input
 *Description: finding random number
 *Return: void
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n)
if else(n < 0)
printf("%i is negative\n", n)
else
printf("%i is 0\n", n)
return (0);
}
