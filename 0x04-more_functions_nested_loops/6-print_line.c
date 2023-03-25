#include "main.h"
/**
 * print_line - a fun that prints _ n times
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
int i;
if (i <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
