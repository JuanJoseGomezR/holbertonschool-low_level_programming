#include "lists.h"
/**
  * free_listint2 - frees a list
  * @head: first node
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		str = (*head)->next;
		free(*head);
		*head = str;
	}
}
