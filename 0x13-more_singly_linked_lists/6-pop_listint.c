#include "lists.h"
/**
  * pop_listint - deletes head node
  * @head: first node
  * Return: integer
  */
int pop_listint(listint_t **head)
{
	int var = 0;
	listint_t *delete = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	delete = (*head)->next;
	var = (*head)->n;
	free(*head);
	*head = delete;

	return (var);
}
