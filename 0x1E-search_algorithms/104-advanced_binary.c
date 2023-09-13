#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive function for advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the current subarray
 * @right: Right index of the current subarray
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
if (left <= right)
{
size_t mid = left + (right - left) / 2;

printf("Searching in array: ");
for (size_t i = left; i <= right; i++)
{
if (i == left)
printf("%d", array[i]);
else
printf(", %d", array[i]);
}
printf("\n");

if (array[mid] == value)
{
if (mid == left || array[mid - 1] != value)
return (int)mid;
else
return advanced_binary_recursive(array, left, mid, value);
}
else if (array[mid] < value)
return advanced_binary_recursive(array, mid + 1, right, value);
else
return advanced_binary_recursive(array, left, mid - 1, value);
}

return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * using advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return advanced_binary_recursive(array, 0, size - 1, value);
}
