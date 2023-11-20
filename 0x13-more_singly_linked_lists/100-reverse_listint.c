#include "lists.h"

/**
 * reverse_listint - reverse the linked lists.
 * @head: pointer to a first nodes in a lists.
 *
 * Return: pointer to a first nodes in new lists .
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
}

*head = prev;

return (*head);
}
