#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of the linked list
 * @head: pointer to first nodes in lists.
 * @n: data to inserts in that the new nodes .
 *
 * Return: pointer to the new nodes , or NULL if it fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
