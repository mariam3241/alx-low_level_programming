#include <stdio.h>
#include <string.h>
/**
 * main - a fun to print alphabet in lowercase
 * Return: Always (Success)
 *
 */
int main(void)
{
int i = 0;
char str[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0 ; i < 26 ; i++)
{
putchar(str[i] + 32);
}
putchar('\n');
return (0);
}
