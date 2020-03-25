#include "lists.h"
/**
  * delete_nodeint_at_index - delete node
  * @head: first node
  * @index: index
  * Return: integer
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *aux_node = *head;
	listint_t *_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		aux_node = (*head)->next;
		free(*head);
		*head = aux_node;
		return (1);
	}

	for (i = 0; i < index - 1;)
	{
		aux_node = aux_node->next;
		++i;
		if (!aux_node)
			return (-1);
	}
	_node = aux_node->next->next;
	free(aux_node->next);
	aux_node->next = _node;
	return (1);
}
