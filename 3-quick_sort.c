include "sort.h"

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
 * @array: Array of integers.
 * @left: Firts position.
 * @right: Last position.
 * @size: Size of array.
 * Return: Index in left.
 */

int partition(int *array, int left, int right, int size)
{
	int pivot = array[right];
	int i = left - 1, j;

	for (j = left; j <= right - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				bubble(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != right)
	{
		bubble(&array[i + 1], &array[right]);
		print_array(array, size);
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
