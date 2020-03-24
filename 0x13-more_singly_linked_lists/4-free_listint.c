#include "lists.h"
/**
  * free_listint - frees malloc
  * @head: first node
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next)
		free(head);
	}
}
