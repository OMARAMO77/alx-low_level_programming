#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: An input string to printing
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l = 1 + _strlen_recursion(s + 1);
		return (l);
	}
	else
	{
		return (0);
	}
}
