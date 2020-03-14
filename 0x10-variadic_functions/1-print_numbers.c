#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_numbers - print num with spaces
  * @separator: spaces
  * @n: # of elementws
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	if (separator == NULL)
		separator = "";

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i < n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
