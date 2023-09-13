#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using Binary Search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);

int left = 0;
int right = (int)size - 1;

while (left <= right)
{
int mid = left + (right - left) / 2;

printf("Searching in array: ");
for (int i = left; i <= right; i++)
{
if (i == left)
printf("%d", array[i]);
else
printf(", %d", array[i]);
}
printf("\n");

if (array[mid] == value)
return mid;
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}
