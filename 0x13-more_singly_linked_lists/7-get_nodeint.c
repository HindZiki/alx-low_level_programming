#include "lists.h"

/**
 * get_nodeint_at_index - return nodes at the certain index in the linked lists.
 * @head: first node in a linked lists.
 * @index: index of a node to return.
 *
 * Return: pointer to node we are looking for, or NULL .
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
