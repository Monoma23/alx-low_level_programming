#include "main.h"
#include <unistd.h>
/**
 * _putchar - display characters
 *
 *
 * Return:  1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

