#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_strings - print a strings
  * @separator: separates
  * @n: # of elements
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *point;

	if (separator == NULL)
		separator = "";

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		point = va_arg(string, char *);

		if (point == NULL)
		{
			printf ("(nil)");
		}
		else
		{
		printf("%s", point);
		}
		if (i < n - 1)
		{
			if (separator)
			{
			printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(string);
}
