#include <stdio.h>
/**
 * main - prime factor 612852475143
 * Return: 0
 */
int main(void)
{
long num = 612852475143;
long a;

for (a = 2; a < num; a++)
{
if (num % a == 0)
num /= a;
}
printf("%li\n", num);
return (0);
}
