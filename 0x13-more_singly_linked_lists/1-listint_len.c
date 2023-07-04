#include "lists.h"

/**
 * listint_len - a fun that returns number of elements in a list
 * @h: parameter
 * Return: the unmber of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);

}
