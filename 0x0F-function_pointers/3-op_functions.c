#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * op_add - returns sum of a & b
  * @a: first var
  * @b: sec var
  * Return: a+b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - prints the difference of a & b
  * @a: 1st var
  * @b: 2nd var
  * Return: a-b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplies a & b
  * @a: 1st var
  * @b: 2nd var
  * Return: a*b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - divides a in b
  * @a: 1st var
  * @b: 2nd var
  * Return: a/b
  */
int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - module of a % b
  * @a: 1st var
  * @b: 2nd var
  * Return: a%b
  */
int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
