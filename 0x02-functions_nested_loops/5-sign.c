#include "main.h"
/**
 * print_sign - a fun that prints the sign of a number
 * @c: parameter
 * Return: 1 if n is greater than 0 and 0 if n is 0 and -1 otherwise
 */
int print_sign(int n)
{
while (n != 0)
{
if (n < 0)
{
return (-1);
_putchar('-');
}
return (1);
_putchar('+');
}
return (0);
_putchar('0');
}
