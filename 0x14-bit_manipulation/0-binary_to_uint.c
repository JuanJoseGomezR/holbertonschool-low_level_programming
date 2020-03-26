#include "holberton.h"
/**
  * binary_to_uint - convert binary to uns int
  * @b: constant var
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		convert = convert << 1;
		if (*b !=  '1' && *b != '0')
			return (0);
		else if (*b == '1')
			convert = convert | 1;
		b++;
	}
	return (convert);
}
