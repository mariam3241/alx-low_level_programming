#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a fun that prints anything
 * @format: parameter
 * @...: parameter
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separetor = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separetor, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separetor, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separetor, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separetor, string);
					break;
				default:
					i++;
					continue;
			}
			separetor = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
