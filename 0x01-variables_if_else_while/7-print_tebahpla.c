#include <stdio.h>
#include <string.h>
/**
 * main - a fun to print alphabet in reverse order
 * Return: Always (Success)
 */
int main(void)
{
char str[100] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 25 ; i >= 0 ; i--)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
