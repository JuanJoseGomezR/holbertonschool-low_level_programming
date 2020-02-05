#include <stdio.h>
/**
*main - sizeof
*Description: using sizeof
*Return: void
*/
int main(void)
{
int i;
float fl;
char ch;
long int lon;
long long int lli;
printf("Size of a char: %ld bytes\n", sizeof(ch));
printf("Size of an int: %ld bytes\n", sizeof(i));
printf("Size of a long int: %ld bytes\n", sizeof(lon));
printf("Size of a long long int: %ld byte\n", sizeof(lli));
printf("Size of a float: %ld byte\n", sizeof(fl));
return (0);
}
