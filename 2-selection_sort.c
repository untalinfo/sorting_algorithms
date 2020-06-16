#include "sort.h"

/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort
 * @array: array of the integer list
 * @size: Size of the array
 * Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, pos;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		pos = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[pos])
				pos = j;
		if (pos != i)
		{
			swp(&array[pos], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swp - Swaps two position of integers
 * @num1: number 1
 * @num2: number 2
 * Return: None
 */
void swp(int *num1, int *num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
