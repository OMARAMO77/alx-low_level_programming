#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, c = 1, res = 0;
	int a;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (a = len - 1; a >= 0; a--)
	{
		if (b[a] != 48 && b[a] != 49)
			return (0);

		if (b[a] == '1')
			res += c;
		c *= 2;
	}
	return (res);
}

/**
  * _strlen - returns the length of a string
  * @s: a string
  *
  * Return: String length
  */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
