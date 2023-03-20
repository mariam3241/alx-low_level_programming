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
for (i = '0' ; i <= '9' ; i++)
{
putchar(i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
