#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *ch = (char *)&a;

	if (*ch)
		return (1);
	return (0);
}
