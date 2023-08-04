#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: The character to prt
 *
 * Return: success 1
 * On error, -1 is returned, and errno is
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

