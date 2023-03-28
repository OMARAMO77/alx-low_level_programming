#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
	int n;
	int m = 0;

	while (str[m] != '\0')
	{
		m++;
	}

	for (n = 0; n < m; n += 2)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
