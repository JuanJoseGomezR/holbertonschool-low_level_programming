#include "holberton.h"

/**
* _isdigit - digit or not
* @c:varible
* Return: 0 - 1
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
