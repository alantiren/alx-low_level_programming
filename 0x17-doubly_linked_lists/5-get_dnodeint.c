#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: The address of the nth node, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = head;

while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
return (NULL);
}
