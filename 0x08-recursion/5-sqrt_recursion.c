#include "main.h"

/**
 * sqr - a fun that finds the natural square root of a given number
 * @n: parameter
 * @i: parameter
 * Return: an int value
 */

int sqr(int n, int i)
{
if ((i * i) > n)
{
return (-1);
}
if ((i * i) == n)
{
return (i);
}
return (sqr(n, i + 1));
}

/**
 * _sqrt_recursion - a fun that returns a given number's square root
 * @n: parameter
 * Return: an int value
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqr(n, 0));
}
