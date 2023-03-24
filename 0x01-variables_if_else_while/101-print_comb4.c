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
	int c, d, e;

	for (c = '0'; c < '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				if (c < d && d < e)
				{
					putchar(c);
					putchar(d);
					putchar(e);

					if (c == '7')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
