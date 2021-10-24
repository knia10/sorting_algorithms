#include <stdlib.h>
#include <stdio.h>
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
