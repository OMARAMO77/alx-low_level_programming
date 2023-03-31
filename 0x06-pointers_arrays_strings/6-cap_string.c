#include "main.h"

/**
  * cap_string - Capitalizes all words of a string
  * @s: input string to capitalize letters
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
