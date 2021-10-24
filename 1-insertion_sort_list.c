#include "sort.h"

/**
 * insertion_sort_list -
 * @list:
 * Return:
 */
void bubble(listint_t *max, listint_t *min)
{
    int temp = max->n;
    max->n = min->n;
    min->n = temp;
}

void insertion_sort_list(listint_t **list)
{
    listint_t *p_front = *list->head;
    listint_t *p_back = NULL;
    while (p_front != NULL)
    {
        // Get next node
        p_back = p_front->next;
        // Update node value when consecutive nodes are not sort
        while (p_back != NULL &&
               p_back->prev != NULL &&
               p_back->n < p_back->prev->n)
        {
            // Modified node data
            bubble(p_back, p_back->prev);
            // Visit to previous node
            p_back = p_back->prev;
        }
        // Visit to next node
        p_front = p_front->next;
    }
}
