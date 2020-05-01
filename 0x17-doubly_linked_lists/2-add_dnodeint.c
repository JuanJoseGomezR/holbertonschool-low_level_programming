#include "lists.h"
/**
  * add_nodeint - add a new node at the beginn
  * @head: head node (first)
  * @n: const int
  * Return: ...
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));

	if (new_nod == NULL)
	{
		free(new_nod);
		return (0);
	}
	new_nod->n = n;
	new_nod->next = *head;
	new_nod->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_nod;
	}
	*head = new_nod;
	return (*head);
}
