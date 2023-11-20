#include "lists.h"

/**
 * pop_listint - delelted head nodes of a the linked lists.
 * @head: pointer to first elements in the linked lists.
 *
 * Return: data inside the element that was deleted ,
 * or zero if lists is empty .
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
