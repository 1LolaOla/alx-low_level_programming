#include "search_algos.h"

/**
 * linear_search -  function searches for value in array of integers
 * @array: points to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: if value is not present in array or if array is NULL, -1
 *         Else, the first index where the value is located
 *
 * Description: Prints a value every time it is compared in the array.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
