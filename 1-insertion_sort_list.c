#include "sort.h"

/**
 * bubble - function that swap two elemts
 * @head: search the max number
 * @front: first element
 * @back: second element
 * Return: Nothing.
 */

void bubble(listint_t **head, listint_t **front, listint_t *back)
{
	(*front)->next = back->next;

	if (back->next != NULL)
		back->next->prev = (*front);
	back->prev = (*front)->prev;
	back->next = (*front);

	if ((*front)->prev)
		(*front)->prev->next = back;
	else
		*head = back;

	(*front)->prev = back;
	(*front) = back->prev;
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
	listint_t *temp = NULL;
	listint_t *apt_index = NULL;
	listint_t *apt_add = NULL;

	if (list == NULL)
		return;

	for (apt_index = (*list)->next; apt_index != NULL; apt_index = temp)
	{
		temp = apt_index->next;
		apt_add = apt_index->prev;

		while (apt_add != NULL && (apt_index->n < apt_add->n))
		{
			bubble(list, &apt_add, apt_index);
			print_list(*list);
		}
	}
}
