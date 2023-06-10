#include "main.h"

/**
 * _abs - a fun that computes the absolute value
 * @n: parameter
 * Return: an int value
 */

int _abs(int n)
{
if (n < 0)
{
int abs_val;
abs_val = n * -1;
return (abs_val);
}
return (n);
}
