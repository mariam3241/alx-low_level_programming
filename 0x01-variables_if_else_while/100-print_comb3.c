#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - printing the combinations of 2 digits
 * Return: Always (Success)
 */
int main(void)
{
int i, j;
for (i = '0' ; i <= '8' ; i++)
{
for (j = '1' ; j <= '9' ; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
}
return (0);
}
