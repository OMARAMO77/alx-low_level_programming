#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: an input integer of number of string to concatenate
 
 * Return: A pointer to the concatened string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c, len1 = 0,  len2 = 0, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		len = len1 + len2;
	else
		len = len1 + n;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	len2 = 0;
	for (c = 0; c < len; c++)
	{
		if (c <= len1)
			str[c] = s1[c];

		if (c >= len1)
		{
			str[c] = s2[len2];
			len2++;
		}
	}
	str[c] = '\0';
	return (str);
}
