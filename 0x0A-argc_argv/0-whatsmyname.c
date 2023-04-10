#include <stdio.h>
#include "main.h"

/**
 * main - a fun that prints the file name
 * @argc: parameter
 * @argv: parameter
 * Return: (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
