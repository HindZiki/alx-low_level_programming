#include "lists.h"

/**
 * print_listint - print all the element of a linked lists.
 * @h: linked list of types listint_t to print.
 *
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
