#include "holberton.h"
/**
  * _strstr - locates a substring
  * @haystack: pointer1
  * @needle: pointer2
  * Return: ss
  */
char *_strstr(char *haystack, char *needle)
{
char *beg;
char *subs;

	while (*haystack != '\0')
	{
	beg = haystack;
	subs = needle;
		while (*subs == *haystack && *subs != '\0' && *haystack != '\0')
		{
			haystack++;
			subs++;
		}
		if (*subs == '\0')
			return (beg);
		haystack = beg + 1;
	}
	return (0);
}
