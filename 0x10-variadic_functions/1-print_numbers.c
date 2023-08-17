#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: string to be printed between nums
 * @n: number of integers passed to the func
 * @...:variable nbr of nbrs to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int h;

	va_start(nums, n);


	for (h = 0; h < n; h++)
	{
		printf("%d", va_arg(nums, int));

		if (h != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");


	va_end(nums);
}

