#include "sort.h"

/**
 * lomuto_partition - Partitions an array using the Lomuto scheme
 *
 * @array: The array to be partitioned
 * @low: The start of the array
 * @high: The end of the array
 * @size: The size of the array
 *
 * Return: The index of the pivot
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j, tmp, i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_recursive - Recursively sorts an array using quick sort
 *
 * @array: The array to be partitioned
 * @low: The start of the array
 * @high: The end of the array
 * @size: The size of the array
 *
 * Return: Nothing
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, i - 1, size);
		quick_sort_recursive(array, i + 1, high, size);
	}
}

/**
 * quick_sort - Function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 *
 * @array: The array to sort
 * @size: the size of the array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
