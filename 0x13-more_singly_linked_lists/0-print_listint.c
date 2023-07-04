#include "lists.h"

/**
 * print_listint - a fun that prints all the elements of a list
 * @h: prototype
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}

	return (elements);
}
