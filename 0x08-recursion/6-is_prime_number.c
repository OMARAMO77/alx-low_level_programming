#include "main.h"

/**
  * checker - Checks if n is prime
  * @n: the number to be checked
  * @m: an assistant integer
  *
  * Return: 1 for prime or 0 otherwise
  */

int checker(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % m == 0 && m != 1)
	{
		return (0);
	}
	else if (n % m == 0 && m ==n)
	{
		return (1);
	}
	else
	{
		return (checker(n, m + 1));
	}
}

/**
  * is_prime_number - Returns 1 if a number is prime, 0 otherwise
  * @n: the number to be checked
  *
  * Return: 1 for prime or 0 otherwise
  */
int is_prime_number(int n)
{
	return (checker(n, 1));
}
