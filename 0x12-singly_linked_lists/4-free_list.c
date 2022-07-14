#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
