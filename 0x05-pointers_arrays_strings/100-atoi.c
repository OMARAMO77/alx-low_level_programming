#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int n = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[n])
	{
		if (s[n] == 45)
		{
			min *= -1;
		}

		while (s[n] >= 48 && s[n] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[n] - '0');
			n++;
		}

		if (isi == 1)
		{
			break;
		}

		n++;
	}

	ni *= min;
	return (ni);
}
