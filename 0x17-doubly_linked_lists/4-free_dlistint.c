#include "lists.h"
/**
 * free_dlistint -  frees a listint_t list.
 * @head: the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	for (; head != NULL; head = head->next)
		free(head);
}
