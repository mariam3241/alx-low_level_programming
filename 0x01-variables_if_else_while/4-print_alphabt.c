#include <stdio.h>
#include <string.h>
/**
 * main - a fun to print the alphabet except q and e
 * Return: Always (Success)
 *
 */
int main(void)
{
int i;
char str[100] = "ABCDFGHIJKLMNOPRSTUVWXYZ";
for (i = 0 ; i < 24 ; i++)
{
putchar(str[i] + 32);
}
putchar('\n');
return (0);
}
