#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
