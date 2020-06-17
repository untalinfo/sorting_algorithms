#include "sort.h"

/**
 * quick_sort - function that sorts an array of
 * integers in ascending order using the Quick Sort
 * @array: array of the integer list
 * @size: Size of the array
 * Return: None
 */
void quick_sort(int *array, size_t size)
{
	size_t start = 0;
	size_t end = size - 1;

	if (array != NULL || size > 1)
		recursive_quick(array, size, start, end);
}
/**
 * recursive_quick - recursive function for partition
 * @arr: Array of the integer list
 * @size: Size of the array
 * @min: value min
 * @max: value max
 * Return: None
 */
void recursive_quick(int arr[], size_t size, int min, int max)
{
	int partition;

	if (min < max)
	{
		partition = lomuto(arr, size, min, max);

		recursive_quick(arr, size, min, partition - 1);
		recursive_quick(arr, size, partition + 1, max);
	}
}

/**
 * lomuto - partitions array
 * @arr: Array of the integer list
 * @size: Size of the array
 * @low: low of array
 * @high: high of array
 * Return: void function
 */
int lomuto(int arr[], size_t size, int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1), j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swp(&arr[i], &arr[j]);
			if (i != j)
				print_array(arr, size);
		}
	}
	i++;
	swp(&arr[i], &arr[high]);
	if (i != j)
		print_array(arr, size);
	return (i);
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
