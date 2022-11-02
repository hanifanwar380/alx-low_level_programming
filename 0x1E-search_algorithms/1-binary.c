#include "search_algos.h"
/**
 * binary_search - Search for a value in an array using linear search
 *
 * @array: Pointer to the first element of the array to search
 * @size: The length of the array
 * @value: The value to search for
 * Return: Return the value at the first index otherwise -1 if not present
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, left_array, right_array;

	if (array == NULL)
		return (-1);

	for (left_array = 0, right_array = size - 1; right_array >= left_array;)
	{
		printf("Searching in array: ");
		for (i = left_array; i < right_array; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = left_array + (right_array - left_array) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right_array = i - 1;

		else
			left_array = i + 1;
	}

	return (-1);
}
