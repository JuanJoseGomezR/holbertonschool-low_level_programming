#include "holberton.h"

/**
* _abs - absolute
* @ab: input
* Return: Always 0.
*/

int _abs(int ab)
{
if (ab >= 0)
return (ab);
else
{
ab *= -1;
return (ab);
}
}
