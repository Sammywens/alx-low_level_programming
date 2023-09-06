#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located,
 * or -1 if value is not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 1, offset = 0, j;

	if (array == NULL)
		return (-1);
	while (size)
	{
		printf("Searching in array: %d", array[0]);
		while (i < size)
			printf(", %d", array[i++]);
		printf("\n");
		j = (size - 1) / 2;
		if (array[j] == value)
			return (j + offset);
		if (array[j] < value)
		{
			offset += j + 1;
			array += j + 1;
			if (!(size % 2))
				j++;
		}
		size = j;
		i = 1;
	}
	return (-1);
}
