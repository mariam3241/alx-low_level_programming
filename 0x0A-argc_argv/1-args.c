#include "main.h"
#include <stdio.h>

/**
 *main - a fun that prints the num of arguments pass to it
 *@argc: parameter
 *@argv: parameter
 *Return: Success
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}

