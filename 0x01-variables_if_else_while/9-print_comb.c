#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - a fun to print combinations of single gigits numbers
 * Return: Always (Success)
 */
int main(void)
{
int i;
for (i = '0' ; i <= '8' ; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('9');
putchar('\n');
return (0);
}