#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list using Linear Skip
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located,
 * or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *current, *express;

if (list == NULL)
return (NULL);

express = list;
while (express->express)
{
printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
if (express->n >= value)
break;
current = express;
express = express->express;
}

if (!express->express && express->n < value)
{
current = express;
while (express->next)
{
express = express->next;
}
}

printf("Value found between indexes [%lu] and [%lu]\n",
current->index, express->index);

while (current)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
if (current->n == value)
return (current);
current = current->next;
}

return (NULL);
}
