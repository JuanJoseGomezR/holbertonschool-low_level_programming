#include <stdio.h>
/**
  * main - number of arg
  * @argc: # of arguments
  * @argv: contains arguments
  * Return: 0
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
int count;
	for (count = 0; count < argc; count++)
	{
		if (count + 1 == argc)
			printf("%d\n", count);
	}
	return (0);
}
