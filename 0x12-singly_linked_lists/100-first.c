#include "lists.h"

void print_before(void) __attribute__ ((constructor));

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
