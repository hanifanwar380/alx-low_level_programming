#include "search_algos.h"

/**
 * jump_search - Search for a value in an array using jump search
 *
 * @array: Pointer to the first element of the array to search
 * @size: The length of the array
 * @value: The value to search for
 * Return: Return the value at the first index otherwise -1 if not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_value, steps;

	if (array == NULL || size == 0)
		return (-1);

	steps = sqrt(size);

	for (i = jump_value = 0; jump_value < size && array[jump_value] < value;)
		;
	{
		printf("Value checked array[%ld] = [%d]\n", jump_value, array[jump_value]);
		i = jump_value;
		jump_value += steps;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump_value);

	jump_value = jump_value < size - 1 ? jump_value : size - 1;
	for (; i < jump_value && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
