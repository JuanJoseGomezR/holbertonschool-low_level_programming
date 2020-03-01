#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds arguments
  * @argc : # of arguments
  * @argv : argumetns
  * Return: 0
  */
int main(int argc, char *argv[])
{
int i, sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (!(*argv[i] >= '0' && *argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
