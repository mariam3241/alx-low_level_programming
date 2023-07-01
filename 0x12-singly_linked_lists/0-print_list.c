#include "lists.h"
#include <stdio.h>

/**
 * print_list - a fun that prints all elements in list called list_t
 * @h: parameter
 * Return: the number of nodes
 */

list_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}
