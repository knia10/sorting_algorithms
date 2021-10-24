#include "sort.h"
/**
 * bubble - function that swap two elemts
 * @max: search the max number
 * @min: search the min number
 */

void bubble(int *max, int *min)
{
	int temp = *max;
	*max = *min;
	*min = temp;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size to array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				bubble(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
