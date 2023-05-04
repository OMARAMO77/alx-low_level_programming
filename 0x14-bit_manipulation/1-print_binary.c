#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: a number
 *
 * Return: Nothng
 */

void print_binary(unsigned long int n)
{
    int a, counter = 0;
    unsigned long int d;

    for (a = 63; a >= 0; a--)
    {
        d = n >> a;

        if (d & 1)
        {
            _putchar('1');
            counter++;
        }
        else if (counter)
            _putchar('0');
    }
    if (!counter)
        _putchar('0');
}
