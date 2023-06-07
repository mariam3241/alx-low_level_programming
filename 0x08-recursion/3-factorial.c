#include "main.h"

/**
 * factorial - a fun that returns the factorial
 * @n: parameter
 * Return: an integer value
 */

int factorial(int n)
{
int fact;

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

if (n)
{
fact = n * factorial(n - 1);
}
return (fact);
}
