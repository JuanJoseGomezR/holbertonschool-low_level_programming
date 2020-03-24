#include "lists.h"
/**
  * add_nodeint_end - add node at the end
  * @head: head node
  * @n: const var:
  * Return: end_node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *ptr;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = end_node;
	return (end_node);
}
