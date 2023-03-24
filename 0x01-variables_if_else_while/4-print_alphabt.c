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
	char ALPHA;

	for (ALPHA = 'a'; ALPHA <= 'z'; ALPHA++)
	{
		if (ALPHA != 'e' && ALPHA != 'q')
			putchar(ALPHA);
	}
	putchar('\n');

	return (0);
}
