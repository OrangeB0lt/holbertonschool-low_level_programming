#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 **/

void print_all(const char * const format, ...)
{
	va_list ValueList;
	char *temporary;
	int i = 0, order;

	while (format && format[i])
	{
		va_start(ValueList, format);
		while (format[i])
		{
			order = 1;
			switch (format[i++])
			{
			case 'c':
				printf("%c", va_arg(ValueList, int));
				break;
			case 'i':
				printf("%d", va_arg(ValueList, int));
				break;
			case 'f':
				printf("%f", va_arg(ValueList, double));
				break;
			case 's':
				temporary = va_arg(ValueList, char*);
				if (temporary)
				{
					printf("%s", temporary);
					break;
				}
				printf("(nil)");
				break;
			default:
				order = 0;
				break;
			}
			if (format[i] && order)
			{
				printf(", ");
			}
		}
		va_end(ValueList);
	}
	printf("\n");
}
