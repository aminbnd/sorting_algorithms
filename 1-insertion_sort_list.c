#include "sort.h"
/**
 * insertion_sort_list - Sort integers of a list
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL;
	listint_t *ref = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	tmp = (*list)->next;
	for (; tmp != NULL; )
	{
		for (ref = tmp; tmp->prev && (tmp->n < tmp->prev->n);)
		{
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (!tmp->prev)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
		tmp = ref->next;
	}
}
