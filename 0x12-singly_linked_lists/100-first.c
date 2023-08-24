#include <stdio.h>

void firstto(void) __attribute__ ((constructor));

/**
 * firstto - prints sentence before main
 * funct is executed
 */
void firstto(void)
{

printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");

}

