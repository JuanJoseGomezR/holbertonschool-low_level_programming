#include "lists.h"
/**
  * print_listint - list elemts of a linked list
  * @h: const var
  * Return: ...
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
