#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int l = 0, m, n;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		n = l / 2;

	else
		n = (l + 1) / 2;

	for (m = n; m < l; m++)
		_putchar(str[m]);

	_putchar('\n');
}
