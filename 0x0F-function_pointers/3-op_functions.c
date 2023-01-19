#include "3-calc.h"

/**
 * op_add - calculates sum of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference between two integers
 * @a: fist integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two integers
 * @a: first  integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - finds the division of two integers
 * @a: first int
 * @b: second integer
 *
 * Return: result of division a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

 /**
  * op_mod - calculates remainder of division of two integers
  * @op_mod: calculates the remainder of division of two integers
  * @a: first interger
  * @b: second integer
  * Return: remainder of the division a and b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
