#include "main.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: An input pointer of the string to split
 *
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	d = a + b;
	s = malloc((sizeof(char) * d) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (c < d)
	{
		if (c <= a)
		{
			s[c] = s1[c];
		}
		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}
		c++;
	}

	s[c] = '\0';
	return (s);
}
