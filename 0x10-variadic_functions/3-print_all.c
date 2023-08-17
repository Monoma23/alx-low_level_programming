#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int h = 0;
	char *strg, *sepp = "";
	va_list list;
	va_start(list, format);
	if (format)
	{
		while (format[h])
		{
			switch (format[h])
			{
				case 'c':
					printf("%s%c", sepp, va_arg(list, int));
					break;
				case 'h':
					printf("%s%d", sepp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sepp, va_arg(list, double));
					break;
				case 's':
					strg = va_arg(list, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", sepp, strg);
					break;
				default:
					h++;
					continue;
			}
			sepp = ", ";
			h++;
		}
	}
	printf("\n");
	va_end(list);
}

