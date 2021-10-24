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
 * selection_sort - sorts array of int in ascending order using Selection sort
 *@array: array to sort
 *@size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int min, max;

	if (array == NULL || size < 2)
		return;
	for (; i < size - 1; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				max = j;
			}
		}
		if (min != array[i])
		{
			bubble(&array[max], &array[i]);
			print_array(array, size);
		}
	}
}
