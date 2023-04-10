#include <stdio.h>
#include "main.h"

/**
 * main - a fun that prints all arguments it receives
 * @argc: parameter
 * @argv: parameter
 * Return: (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
