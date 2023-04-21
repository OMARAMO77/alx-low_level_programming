#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - Prints anything
  * @format: list of types of argument passed to the function
  *
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
