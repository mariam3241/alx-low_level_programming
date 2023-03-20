#include <stdio.h>
#include <string.h>
/**
 * main - a fun to print numbers of base 16
 * Return: Always (Success)
 */
int main(void)
{
char str[100] = "0123456789abcdef";
int i;
for (i = 0 ; i <= 15 ; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
