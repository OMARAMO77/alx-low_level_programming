#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, d;

	for (c = '0'; c < '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			if (c < d)
			{
				putchar(c);
				putchar(d);

				if (c == '8')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
