#include "holberton.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: point1
  * @s2: point2
  * @n: var
  * Return: pointer	
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	j++;

	if (n > j)
		conc = malloc(sizeof(*conc) * (i + j));
	else
		conc = malloc(sizeof(*conc) * (i + n + 1));
	if (conc == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		conc[k] = s1[k];
	}
	for (l = 0; l < j && l < n; k++, l++)
	{
		conc[k] = s2[l];
	}
	conc[k] = '\0';
	return (conc);
}
