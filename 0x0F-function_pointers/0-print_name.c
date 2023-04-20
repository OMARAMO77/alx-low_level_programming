#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: function pointed to
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
