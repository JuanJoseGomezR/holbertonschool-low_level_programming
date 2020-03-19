#include "lists.h"

void print_before(void) __attribute__ ((constructor));
/**
  * print_before - prints before main executes
  * Return: nothing (void)
  */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
