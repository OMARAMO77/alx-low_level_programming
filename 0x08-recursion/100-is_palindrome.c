#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: An input string
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

/**
 * helper_palindrome - helper
 * @s: string
 * @len: length
 *
 * Return: string
 */

int helper_palindrome(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	else if (*s == *(s + l - 1))
	{
		return (helper_palindrome(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if s is a palindrome string
 * @s: a string
 *
 * Return: 1 if is a string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	return (helper_palindrome(s, l));
}
