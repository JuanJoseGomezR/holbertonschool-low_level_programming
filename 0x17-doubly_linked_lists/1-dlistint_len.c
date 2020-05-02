#include "lists.h"
/**
  * dlistint_len - # of elements
  * @h: head node
  * Return: # of elements in the list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t iter = 0;

	while (h != NULL)
	{
		h = h->next;
		iter++;
	}
	return (iter);
}
