#include <stdio.h>

/**
*_print_first - executes before main
*Return: nothing
*/
void _print_first(void) __attribute__ ((constructor));
void _print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
