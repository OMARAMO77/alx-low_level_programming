#include "main.h"

/**
 * assist - assistant function
 * @n: a natural number
 * @m: assistant integer
 *
 * Return: The square root of n
 */

int assist(int n, int m)
{
	if (n == (m * m))
	{
		return (m);
	}
	else if (n > (m * m))
	{
		return (assist(n, m + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 * @n: a natural number
 *
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (assist(n, 1));
	}
}
