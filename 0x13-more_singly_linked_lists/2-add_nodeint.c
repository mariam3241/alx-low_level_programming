#include "lists.h"

/**
 * add_nodeint - a fun that adds a new node at the beginning of a list
 * @head: parameter
 * @n: parameter
 * Return: pointer or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *firstNode;

	firstNode = malloc(sizeof(listint_t));

	if (!firstNode)
	{
		return (NULL);
	}

	firstNode->n = n;
	firstNode->next = *head;
	*head = firstNode;

	return (firstNode);
}
