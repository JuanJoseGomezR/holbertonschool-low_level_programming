#include "lists.h"
/**
  * sum_listint - sum of data
  * @head: first node
  * Return: sum of all the data
  */
int sum_listint(listint_t *head)
{
	unsigned int count;
	listint_t *nd_index = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		count = count + head->n;
		nd_index = head->next;
		head = nd_index;
	}
	return (count);
}
