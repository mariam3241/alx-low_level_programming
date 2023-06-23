#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a fun that adds 2 numbers
 * @a: parameter
 * @b: parameter
 * Return: an int value (the result of summation)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a fun that subtracts two numbers
 * @a: parameter
 * @b: parameter
 * Return: an int value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a fun that returns the product of two numbers
 * @a: parameter
 * @b: parameter
 * Return: an int value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a fun that returns the division of two numbers.
 * @a: parameter
 * @b: parameter
 * Return: an int value
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a fun that returns the remainder of the division of two numbers.
 * @a: parameter
 * @b: parameter
 * Return: an int value
 */
int op_mod(int a, int b)
{
	return (a % b);
}
