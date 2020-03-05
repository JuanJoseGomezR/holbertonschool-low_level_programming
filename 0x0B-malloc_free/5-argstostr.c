#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - concatenates arguments
* @ac: arg count
* @av: dble pointer
* Return: char type
*/

char *argstostr(int ac, char **av)
{
int i, j, l;
char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	j = 0;
	while (av[i][j] != '\0')
	{
		j++;
	}
	l += j + 1;
	}

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(s + l) = av[i][j];
			l++;
		}
		*(s + l) = '\n';
		l++;
	}
	return (s);
}
