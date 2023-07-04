#include "lists.h"

/**
 * add_nodeint_end - a fun that adds a new node at the end of a list
 * @head: parameter
 * @n: parameter
 * Return: pointer to the node added or null if fail to add
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *temp = *head;

	lastNode = malloc(sizeof(listint_t));
	if (!lastNode)
		return (NULL);

	lastNode->n = n;
	lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = lastNode;

	return (lastNode);
}
