#include "holberton.h"

/**
* _islower - check the code for Holberton School students.
*@c: description
* Return: Always 0.
*/

int _islower(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
