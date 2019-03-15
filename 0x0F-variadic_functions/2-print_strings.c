#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings and a new line
 * @separator: separators
 * @n: num of arguments
 *
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *pointer;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		pointer = va_arg(strings, char *);
		if (pointer == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", pointer);
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(strings);
	printf("\n");
}
