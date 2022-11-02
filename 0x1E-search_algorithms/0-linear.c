#include "search_algos.h"
/**
 * linear_search - Search for a value in an array using linear search
 *
 * @array: Pointer to the first element of the array to search
 * @size: The length of the array
 * @value: The value to search for
 * Return: Return the value at the first index otherwise -1 if not present
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
