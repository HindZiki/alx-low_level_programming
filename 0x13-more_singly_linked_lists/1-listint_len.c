#include "lists.h"

/**
 * listint_len - return the numbers of element in a the linked list.
 * @h: linked list of the types listint_t to traverses.
 *
 * Return: the numbers of node.
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}
