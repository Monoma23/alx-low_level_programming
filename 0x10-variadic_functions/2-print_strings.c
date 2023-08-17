#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strs, followed by a new line
 * @separator:string to be printed between strg
 * @n: number of strings passed to the func
 * @...: A variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed
 *If one of the strs if NULL, (nil) will printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strg;
	unsigned int h;

	va_start(strings, n);



	for (h = 0; h < n; h++)
	{
		strg = va_arg(strings, char *);

		if (strg == NULL)
			printf("(nil)");
		else
			printf("%s", strg);

		if (h != (n - 1) && separator != NULL)
			printf("%s", separator);
	}



	printf("\n");


	va_end(strings);
}

