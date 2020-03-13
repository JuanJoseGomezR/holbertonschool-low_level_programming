#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_char - print char format
  * @form: type of format
  * Return: void
  */
void print_char(va_list form)
{
	printf("%c", va_arg(form, int));
}
/**
  * print_int - print int format
  * @form: type of format
  * Return: void
  */
void print_int(va_list form)
{
	printf("%i", va_arg(form, int));
}
/**
  * print_fl - print float format
  * @form: type of format
  * Return: void
  */
void print_fl(va_list form)
{
	printf("%f", va_arg(form, double));
}
/**
  * print_s - print string format
  * @form: type of format
  * Return: void
  */
void print_s(va_list form)
{
	char *pt;

	pt = va_arg(form, char *);


	if (pt == NULL)
	{
		printf("(nil)");
	}
	else
	printf("%s", pt);
}
/**
  * print_all - print anything
  * @format: format
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int j, i;
	const char *separator = "";

	s pr[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_fl},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(all, format);

	i = 0;
		while (format && format[i])
		{
			j = 0;
			while (j < 4)
			{
				if (pr[j].op[0] == format[i])
				{
					printf("%s", separator);
					separator = ", ";
					pr[j].f(all);
					break;
				}
				j++;
			}
			i++;
		}
		printf("\n");
		va_end(all);
}
