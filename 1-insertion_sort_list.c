#include "sort.h"

/**
 * bubble - function that swap two elemts
 * @max: search the max number
 * @min: search the min number
 */

void bubble(listint_t *max, listint_t *min)
{
	int temp = max->n;

	max->n = min->n;
	min->n = temp;
}

/**
 * insertion_sort_list - Function that sorts
 * a doubly linked list of integers
 * in ascending order using the
 * Insertion sort algorithm.
 * @list: Pointer double to the list
 * Return: Nothing.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *p_front = *list->head;
	listint_t *p_back = NULL;

	while (p_front != NULL)
	{
		p_back = p_front->next;
		while (p_back != NULL &&
			   p_back->prev != NULL &&
			   p_back->n < p_back->prev->n)
		{
			bubble(p_back, p_back->prev);
			p_back = p_back->prev;
		}
		p_front = p_front->next;
	}
}
