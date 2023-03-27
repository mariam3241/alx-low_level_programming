#include "main.h"

/**
 * print_rev - a fun that prints a string in reverse order
 * @s: parameter of type char
 * Return: void
 */

void print_rev(char *s)
{
int longi = 0;
int count;
while (*s != '\0')
{
longi++;
s++;
}
s--;
for (count = longi ; count > 0 ; count++)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
