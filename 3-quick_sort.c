#include "sort.h"

/**
 * bubble - Function that swap two elemts.
 * @max: Search the max number.
 * @min: Search the min number.
 */

void bubble(int *max, int *min)
{
	int temp = *max;
	*max = *min;
	*min = temp;
}

/**
 * partition - This function is
 * the one that actually sorts
 * the array and exchanges values.
 * @arr: Array of integers.
 * @left: Firts position.
 * @right: Last position.
 * @size: Size of array.
 * Return: Index in left.
 */

int partition(int *arr, int left, int right, int size)
{
	/* int pivot = arr[right]; */
	int i = 0;

	/* for (j = left; j <= right - 1; j++) */
	for (i = left - 1; left <= right - 1; left++)
	{
		/* if (arr[j] < pivot) */
		if (arr[left] < arr[right])
		{
			i++;
			if (i != left)
			{
				bubble(&arr[i], &arr[left]);
				print_array(arr, size);
			}
		}
	}
	/*if (i + 1 != right)*/
	if (arr[i + 1] > arr[right])
	{
		bubble(&arr[i + 1], &arr[right]);
		print_array(arr, size);
	}
	return (i + 1);
}

/**
 * divide_conquer - Order with recursion.
 * @array: Array of integer.
 * @left: First position.
 * @right: Last position.
 * @size: Size of array.
 * Return: Nothing.
 */

void divide_conquer(int array[], int left, int right, size_t size)
{
	int idx_part = 0;

	if (left < right)
	{
		idx_part = partition(array, left, right, size);
		divide_conquer(array, left, idx_part - 1, size);
		divide_conquer(array, idx_part + 1, right, size);
	}
}

/**
 * quick_sort - Sorts an array of int in
 * ascending order with Quick sort algorithm.
 * @array: Array to sort.
 * @size: Size to array.
 * Return: Nothing.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	divide_conquer(array, 0, size - 1, size);
}
