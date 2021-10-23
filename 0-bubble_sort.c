#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size to array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp, *max, *min;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = *max;
                *max = *min;
                *min = temp;
                print_array(array, size);
            }
        }
    }
}