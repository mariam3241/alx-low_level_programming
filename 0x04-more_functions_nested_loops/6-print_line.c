#include "main.h"
/**
 * print_line - a fun that prints _ n times
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
int a;
while (n <= 0)
{
_putchar('\n');
}
for (a = 0 ; a < n ; a++)
{
_putchar(95);
}
_putchar('\n');
}
