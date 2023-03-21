#include <stdio.h>
#include <stdlib.h>
/**
 * main - a fun to print comb of 3 digits
 * Return: Always (Success)
 */
int main(void)
{
int i, j, c;
for (i = '0' ; i < '9' ; i++)
{
for (j = '1' ; j < '9' ; j++)
{
for (c = '2' ; i < '9' ; c++)
{
if ((j != i) != c)
{
putchar(i);
putchar(j);
putchar(c);
if (i == '7' && j == '8')
{
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
}
return (0);
}
