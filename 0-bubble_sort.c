#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, sort = 0, tmp;
	int end = 0;

	if (array == NULL)
		return;

	while (end != 1)
	{
		end = 1;

		for (i = 0; i < size - 1 - sort; i++)
		{
			if (array[i] > array[i + 1])
			{
				end = 0;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}

		}
		sort++;
		print_array(array, size);
	}
}
