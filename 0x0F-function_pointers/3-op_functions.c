#include "3-calc.h"

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);

/**
 * op_add - Returns the sum of two nbrs
 * @x: The first nbr
 * @y: The second nbr
 *
 * Return:sum of x and y.
 */
int op_add(int x, int y)
{
return (x + y);
}
/**
 * op_sub - Returns the difference of two nums
 * @x: first num
 * @y: second num
 *
 * Return: The difference of x & y.
 */
int op_sub(int x, int y)
{

return (x - y);

}
/**
 * op_mul - Returns the prod of two num
 * @x: The fst num
 * @y: The secnd num
 *
 * Return: product of x and y
 */
int op_mul(int x, int y)
{

return (x * y);

}
/**
 * op_div - Returns the division of two num
 * @x: first num
 * @y: second num
 *
 * Return:quotient of x and y
 */
int op_div(int x, int y)
{

return (x / y);
}
/**
 * op_mod - Returns the remainder of the division of two num
 * @x: first num
 * @y: second num
 *
 * Return:remainder of the div of x by y
 */
int op_mod(int x, int y)
{

return (x % y);

}

