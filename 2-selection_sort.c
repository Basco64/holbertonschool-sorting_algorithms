#include "sort.h"

/**
 * selection_sort - Function that sorts an array of
 * integers in ascending order using
 * the Selection sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idxMin, tmp;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		idxMin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idxMin])
				idxMin = j;
		}

		if (i != idxMin)
		{
			tmp = array[i];
			array[i] = array[idxMin];
			array[idxMin] = tmp;
			print_array(array, size);
		}
	}
}
