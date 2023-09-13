#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using Linear Search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

for (i = 0; (i < size) && (array); i++)
{
if (*(array + i) == value)
{
printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
return (i);
}
else
{
printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
}
}
return (-1);
}