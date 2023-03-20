#include <stdio.h>
#include <string.h>
/**
 * main - a fun to print alphabet in both lower and uppercase
 * Return: Always (Success)
 *
 */
int main(void)
{
char str[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i, c;
for (i = 0 ; i < 26 ; i++)
{
putchar(str[i] + 32);
}
for (c = 0 ; c < 26 ; c++)
{
putchar(str[c]);
}
putchar('\n');
return (0);
}
