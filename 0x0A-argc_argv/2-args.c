#include <stdio.h>
/**
  * main - shows each argument
  * @argc: # of arguments
  * @argv: arguments
  * Return: 0
  */
int main(int __attribute__((unused)) argc, char *argv[])
{
int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
