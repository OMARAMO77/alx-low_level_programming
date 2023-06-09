#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char c;

	while (s[l] != '\0')
		l++;

	while (i < l--)
	{
		c = s[i];
		s[i++] = s[l];
		s[l] = c;
	}
}
