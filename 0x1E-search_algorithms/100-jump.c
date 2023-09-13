#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump Search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
if (array == NULL)
 return (-1);

int step = (int)sqrt(size);
int prev = 0;

printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

while (array[prev] < value)
{
prev = step;
step += (int)sqrt(size);
if (prev >= (int)size)
break;

printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
}

int left = prev - step + 1;
int right = prev;

printf("Value found between indexes [%d] and [%d]\n", left, right);

for (int i = left; i <= right && i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);

if (array[i] == value)
return i;
}

return (-1);
}

/**
 * minimum_value - finds the minimum of two values
 * @a: first value to compare
 * @b: second value to compare
 *
 * Return: The smaller of the two values, or a if equal
 */
size_t minimum_value(size_t a, size_t b)
{
if (b < a)
return (b);
return (a);
}