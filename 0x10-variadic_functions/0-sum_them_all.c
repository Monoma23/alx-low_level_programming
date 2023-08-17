#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns som of all its params
 * @n: number of params passed to func
 * @...: A variable nbr of params to calcul som
 *
 * Return: If n == 0 - 0
 *        ifnot - som of all parames
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int h, som = 0;

	va_start(ap, n);

	for (h = 0; h < n; h++)
		som += va_arg(ap, int);

	va_end(ap);

	return (som);

}

