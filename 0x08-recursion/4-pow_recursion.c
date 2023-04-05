#include "main.h"

/**
 * _pow_recursion - a fun that returns x to the power y
 * @x: parameter
 * @y: parameter
 * Return: int value
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
		return (pow);
	}
}
