#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Random Number with last digit
*
* Description: Gets Last Digit
* Return: 0
*/
int main(void)
{
int n, v;

srand(time(0));
n = rand() - RAND_MAX / 2;
v = n;
n %= 10;
printf("Last digit of %i is %i ", v, n);
if (n > 5)
printf("and is greater than 5\n");
else if (n < 6 && n != 0)
printf("and is less than 6 and not 0\n");
else
printf("and is 0\n");
return (0);
}
