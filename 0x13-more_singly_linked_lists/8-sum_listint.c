#include "lists.h"

/**
 * sum_listint - calculate  sum of all the data in a the listint_t lists .
 * @head: first node in a linked lists .
 *
 * Return: resulting the sum .
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
