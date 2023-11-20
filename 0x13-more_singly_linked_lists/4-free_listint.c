#include "lists.h"

/**
 * free_listint - free a the linked lists.
 * @head: listint_t lists to be the freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
temp = head->next;
free(head);
head = temp;
	}
}
