#include "search_algos.h"

/**
 * jump_search - Search for a value in an array using interpolation search
 *
 * @array: Pointer to the first element of the array to search
 * @size: The length of the array
 * @value: The value to search for
 * Return: Return the value at the first index otherwise -1 if not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		i = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
