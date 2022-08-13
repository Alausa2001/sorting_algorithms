#include <stddef.h>
#include "sort.h"
/**
 * insertion_sort_list - This function performs a sort
 * operation using the insrtion technique
 * @list: pointer to the head of the list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	int store;

	while (temp->next != NULL)
	{
		temp = temp->next;
		store = temp->n;
		temp = temp->prev;
		while (temp->prev)
		{
			temp->next = temp->prev;
		}
		temp = temp->next;
		temp->n = store;
	}
}

			
