#include "sort.h"

/**
 * bubble_sort - function that sorts an array of
 * integers in ascending order using the Bubble sort
 * @array: array of the integer list
 * @size: Size of the array
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	size_t swp = 1, b;
	int tmp;

	if (array == NULL || size < 2)
		return;
	while (swp != 0)
	{
		swp = 0;
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				tmp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = tmp;
				swp = 1;
				print_array(array, size);
			}
		}
	}
}
