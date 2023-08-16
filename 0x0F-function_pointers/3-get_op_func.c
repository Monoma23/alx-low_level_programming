#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Select the correct funct to perform
 *               the operation asked by the user
 * @s: operator passed as arg
 *
 * Return: ptr to the func corresponding
 *         to the op given as a param
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int h = 0;
while (ops[h].op != NULL && *(ops[h].op) != *s)
h++;
return (ops[h].f);
}

