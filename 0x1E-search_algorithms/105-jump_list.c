#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located,
 * or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
listint_t *current, *prev;
size_t step, block_start;

if (list == NULL || size == 0)
return (NULL);

step = sqrt(size);
current = list;
block_start = 0;

while (current->index < size - 1 && current->n < value)
{
prev = current;
block_start += step;
while (current->index < block_start)
current = current->next;

printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
}

printf("Value found between indexes [%lu] and [%lu]\n",
prev->index, current->index);

while (prev->index <= current->index)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
return (prev);

prev = prev->next;
}

return (NULL);
}
