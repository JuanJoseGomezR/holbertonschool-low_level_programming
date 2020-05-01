#include "lists.h"
/**
  * print_dlistint - prints all the elements on the list
  * @h: head node
  * Return: 0
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t iter = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		iter++;
	}
	return (iter);
}
