#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - a fun to print single digit numbers
 * Return: Always (Success)
 */
int main(void)
{
int i = 0;
for (i = '0' ; i <= '9' ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
